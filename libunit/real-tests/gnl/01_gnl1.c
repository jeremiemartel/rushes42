/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_gnl1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 20:23:43 by thberrid          #+#    #+#             */
/*   Updated: 2018/12/02 17:38:40 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

int		gnl1(void)
{
	int		fd;
	char	*line;

	fd = -1;
	if (get_next_line(fd, &line) == -1)
	{
		free(line);
		return (SUCCESS);
	}
	free(line);
	return (FAILURE);
}
