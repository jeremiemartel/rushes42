/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_filit8.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:04:39 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/02 19:48:19 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit_test.h"
#include "libunit.h"
#include <string.h>

int			fillit8(void)
{
	pid_t	pid_test;
	int		pipefd[2];
	int		wait_res;
	char	buf[FILLIT8_LEN + 1];
	char	**params;
	pid_t	pid_timeout;
	pid_t	first_pid;

	if (pipe(pipefd) == -1)
		exit(-1);
	if ((pid_test = fork()) == -1)
		exit(FAILURE);
	if (pid_test == 0)
	{
		params = malloc(sizeof(char *) * 3);
		params[0] = strdup(FILLIT_PATH);
		params[1] = strdup(FILLIT8_SAMPLE);
		params[2] = NULL;
		if (dup2(pipefd[1], 1) == -1)
			exit(-1);
		close(pipefd[0]);
		execve(FILLIT_PATH, params, NULL);
	}
	if ((pid_timeout = fork()) == -1)
		exit(FAILURE);
	if (pid_timeout == 0)
	{
		sleep(TIMEOUT_SAFE);
		exit(SIGUSR1);
	}
	else
	{
		first_pid = wait(&wait_res);
		if (first_pid == pid_timeout)
		{
			kill(pid_test, SIGKILL);
			return (SIGUSR1);
		}
		kill(pid_timeout, SIGKILL);
		close(pipefd[1]);
		if (wait_res == SIGBUS || wait_res == SIGSEGV || 1)
		{
			close(pipefd[0]);
			close(pipefd[1]);
			return(wait_res);
		}
		read(pipefd[0], buf, FILLIT8_LEN);
		close(pipefd[0]);
		buf[FILLIT8_LEN] = 0;
		if (strcmp(buf, FILLIT8_RES) == 0)
			exit(SUCCESS);
		else
			exit(FAILURE);
	}
	return (FAILURE);
}
