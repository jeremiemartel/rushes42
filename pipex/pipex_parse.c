/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_parse.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 11:20:05 by jmartel           #+#    #+#             */
/*   Updated: 2019/02/03 11:54:41 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

/*
** pipex_parse: call the parts of parsing functions
**	pipex_parse_file : open the file descriptors and stock it in pipex
**	pipex_parse_cmd : look for binaries in PATH env variable and stock it
*/

t_pipex			*pipex_parse(char **argv, char **env)
{
	t_pipex		*pipex;

	if (!(pipex = t_pipex_new()))
		return (NULL);
	if (pipex_parse_files(pipex, argv[1], argv[4]) == FAILURE)
	{
		t_pipex_free(pipex);
		return (NULL);
	}
	if (pipex_parse_cmd(pipex, argv[2], argv[3], env) == FAILURE)
	{
		t_pipex_free(pipex);
		return (NULL);
	}
	return (pipex);
}
