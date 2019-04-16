/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 09:15:10 by jmartel           #+#    #+#             */
/*   Updated: 2019/02/03 11:54:43 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

/*
** main : programm is divided in two parts:
**			pipex_parse : prepare the t_pipex struct tht carry every arguments
**			pipex_fork : realize forking and piping betweens sons and father
*/

int			main(int argc, char **argv, char **env)
{
	t_list		*pipex;

	if (argc < 2)
		return (pipex_usage());
	if (!(pipex = pipex_parse(argc, argv, env)))
		return (FAILURE);
	pipex_pre_fork(pipex);
	if (pipex_fork(pipex, env) == FAILURE)
	{
		ft_lstdel(&pipex, t_pipex_free);
		return (FAILURE);
	}
	// t_pipex_put_list(pipex);
	ft_lstdel(&pipex, t_pipex_free);
	return (0);
}

int			pipex_usage(void)
{
	ft_putstr("./pipex file1 \"cmd1\" \"cmd2\" file2 is equivalent to : ");
	ft_putstrn("< file1 cmd1 | cmd2 > file2 , in shell");
	return (0);
}

int			pipex_close(int *fd)
{
	if (close(*fd))
		return (FAILURE);
	*fd = CLOSED_FD;
	return (SUCCESS);
}
