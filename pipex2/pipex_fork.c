/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_fork.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 16:43:10 by jmartel           #+#    #+#             */
/*   Updated: 2019/02/03 11:34:27 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

#define IN		1
#define OUT		0

int			pipex_pre_fork(t_list *list)
{
	int		pipe_fd[2];
	t_pipex	*pipex;

	pipe_fd[OUT] = 0;
	while (list)
	{
		pipex = (t_pipex*)list->content;
		pipex->fdin = pipe_fd[OUT];
		pipe(pipe_fd);
		pipex->fdout = pipe_fd[IN];
		list = list->next;
	}
	pipex->fdout = 1;
	return (SUCCESS);
}

int			pipex_fork(t_list *list, char **env)
{
	t_pipex		*pipex;
	pid_t		pid;
	int			res;

	while (list)
	{
		pipex = (t_pipex*)list->content;
		pid = fork();
		if (pid == 0)
		{
			dup2(pipex->fdin, 0);
			dup2(pipex->fdout, 1);
			execve(pipex->cmd[0], pipex->cmd, env);
			return (ft_perror(pipex->cmd[0], MS_ERR_CMD_NOT_FOUND));
		}
		wait(&res);
		pipex_close(&pipex->fdin);
		pipex_close(&pipex->fdout);
		if (res == FAILURE)
			return (FAILURE);
		list = list->next;
	}
	return (SUCCESS);
}

/*
int			pipex_fork_cmd1(t_pipex *pipex, char **env)
{
	pid_t	pid;
	int		res;

	if (pipe(pipex->pipe) != 0)
		return (ft_perror("Can't pipe", MS_ERR_USR));
	if ((pid = fork()) == -1)
		return (FAILURE);
	if (pid == 0)
	{
		if (dup2(pipex->fdin, 0) == -1)
			return (ft_perror("Can't dup2", MS_ERR_USR));
		if (dup2(pipex->pipe[1], 1) == -1)
			return (ft_perror("Can't dup2", MS_ERR_USR));
		pipex_close(&(pipex->pipe[0]));
		execve(pipex->path1, pipex->cmd1, env);
		return (ft_perror(*pipex->cmd1, MS_ERR_CMD_NOT_FOUND));
	}
	wait(&res);
	pipex_close(&(pipex->fdin));
	pipex_close(&(pipex->pipe[1]));
	if (res == FAILURE)
		return (res);
	return (SUCCESS);
}

int			pipex_fork_cmd2(t_pipex *pipex, char **env)
{
	pid_t	pid;
	int		res;

	if ((pid = fork()) == -1)
		return (-1);
	if (pid == 0)
	{
		if (dup2(pipex->pipe[0], 0) == -1)
			return (ft_perror("Can't dup2", MS_ERR_USR));
		if (dup2(pipex->fdout, 1) == -1)
			return (ft_perror("Can't dup2", MS_ERR_USR));
		execve(pipex->path2, pipex->cmd2, env);
		return (ft_perror(*pipex->cmd2, MS_ERR_CMD_NOT_FOUND));
	}
	else
	{
		pipex_close(&(pipex->pipe[0]));
		wait(&res);
		if (res == FAILURE)
			return (FAILURE);
		return (SUCCESS);
	}
}

int			pipex_fork(t_pipex *pipex, char **env)
{
	if (pipex_fork_cmd1(pipex, env) == FAILURE)
		return (FAILURE);
	if (pipex_fork_cmd2(pipex, env) == FAILURE)
		return (FAILURE);
	return (SUCCESS);
}
*/
