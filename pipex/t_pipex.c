/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_pipex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 11:22:52 by jmartel           #+#    #+#             */
/*   Updated: 2019/02/03 11:27:44 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

t_pipex		*t_pipex_new(void)
{
	t_pipex		*new;

	if (!(new = malloc(sizeof(*new))))
		return (NULL);
	new->infile = NULL;
	new->outfile = NULL;
	new->fdin = CLOSED_FD;
	new->fdout = CLOSED_FD;
	new->pipe[0] = CLOSED_FD;
	new->pipe[1] = CLOSED_FD;
	new->path1 = NULL;
	new->path2 = NULL;
	new->cmd1 = NULL;
	new->cmd2 = NULL;
	return (new);
}

void		t_pipex_put(t_pipex *pipex)
{
	if (!(pipex))
		return ;
	if (pipex->infile)
		ft_printf("infile : %s\n", pipex->infile);
	if (pipex->outfile)
		ft_printf("outfile : %s\n", pipex->outfile);
	if (pipex->fdin >= 0)
		ft_printf("fdin : %d\n", pipex->fdin);
	if (pipex->fdout >= 0)
		ft_printf("fdout : %d\n", pipex->fdout);
	if (pipex->path1)
		ft_printf("path1 : %s\n", pipex->path1);
	if (pipex->cmd1)
		ft_strtab_put(pipex->cmd1);
	if (pipex->path2)
		ft_printf("path2 : %s\n", pipex->path2);
	if (pipex->cmd2)
		ft_strtab_put(pipex->cmd2);
}

void		t_pipex_free(t_pipex *pipex)
{
	if (!(pipex))
		return ;
	if (pipex->infile)
		free(pipex->infile);
	if (pipex->outfile)
		free(pipex->outfile);
	if (pipex->fdin >= 0)
		pipex_close(&(pipex->fdin));
	if (pipex->fdout >= 0)
		pipex_close(&(pipex->fdout));
	if (pipex->pipe[0] >= 0)
		pipex_close(&(pipex->pipe[0]));
	if (pipex->pipe[1] >= 0)
		pipex_close(&(pipex->pipe[1]));
	if (pipex->path1)
		free(pipex->path1);
	if (pipex->path2)
		free(pipex->path2);
	if (pipex->cmd1)
		ft_strtab_free(pipex->cmd1);
	if (pipex->cmd2)
		ft_strtab_free(pipex->cmd2);
	free(pipex);
}
