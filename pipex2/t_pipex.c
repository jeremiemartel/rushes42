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
	new->fdin = 0;
	new->fdout = 1;
	new->cmd = NULL;
	return (new);
}

void		t_pipex_put(t_pipex *pipex)
{
	if (!(pipex))
		return ;
	if (pipex->fdin >= 0)
		ft_printf("fdin : %d\n", pipex->fdin);
	if (pipex->fdout >= 0)
		ft_printf("fdout : %d\n", pipex->fdout);
	if (pipex->cmd)
		ft_strtab_put(pipex->cmd);
}

void		t_pipex_put_list(t_list *list)
{
	t_pipex		*pipex;

	while (list)
	{
		pipex = (t_pipex*)list->content;
		t_pipex_put(pipex);
		list = list->next;
	}
}

void		t_pipex_free(void *content, size_t size)
{
	t_pipex *pipex;

	pipex = (t_pipex*)content;
	if (!(pipex))
		return ;
	if (pipex->fdin >= 0)
		pipex_close(&(pipex->fdin));
	if (pipex->fdout >= 0)
		pipex_close(&(pipex->fdout));
	if (pipex->cmd)
		ft_strtab_free(pipex->cmd);
	free(pipex);
	return ;
	(void)size;
}
