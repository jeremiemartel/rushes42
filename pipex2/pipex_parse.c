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

t_list			*pipex_parse(int argc, char **argv, char **env)
{
	t_list	*pipex;
	t_list	*head;

	pipex = NULL;
	if (pipex_parse_cmd(&pipex, argc, argv) == FAILURE)
	{
		ft_lstdel(&pipex, t_pipex_free);
		return (NULL);
	}
	head = pipex;
	while (head)
	{
		pipex_parse_path(head->content, env);
		head = head->next;
	}
	return (pipex);
}
