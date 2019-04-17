/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_fork_bis.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 16:43:10 by jmartel           #+#    #+#             */
/*   Updated: 2019/04/17 10:40:25 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

#define IN		1
#define OUT		0

int			pipex_fork(t_list *list, char **env)
{
	t_pipex		*pipex;
	pid_t		pid;
	int			res;
	int			pipe_fd[2];
	int			len = ft_lstlen(list);
	int			i;
    int         fdin;
    int         fdout;

	pipe_fd[OUT] = 0;
	i = 0;
	while (list)
	{
        ft_dprintf(2, "i : %d <=> len : %d\n", i, len);
		pipex = (t_pipex*)list->content;
		fdin = pipe_fd[OUT];
		pipe(pipe_fd);
        ft_dprintf(2, "new pipe : pipe[in] = %d, pipe[out] = %d\n", pipe_fd[IN], pipe_fd[OUT]);
		if (i < len - 1)
			fdout = pipe_fd[IN];
		else
			fdout = 1;
		pid = fork();
		if (pid == 0)
		{
			if (dup2(fdin, 0) == -1)
				return (FAILURE);
			if (dup2(fdout, 1) == -1)
				return (FAILURE);
			execve(pipex->cmd[0], pipex->cmd, env);
			return (ft_perror(pipex->cmd[0], MS_ERR_CMD_NOT_FOUND));
		}
		wait(&res);
		if (fdin != 0)
			pipex_close(&fdin);
		if (fdout != 1)
			pipex_close(&fdout);
		if (res == FAILURE)
			return (FAILURE);
		list = list->next;
		i++;
	}
	ft_printf(COLOR_GREEN"stdout restablished\n"COLOR_END);
	return (SUCCESS);
}
