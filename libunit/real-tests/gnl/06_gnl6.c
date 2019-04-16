/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_gnl6.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 20:15:59 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/02 18:28:20 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include "libunit.h"
#include <fcntl.h>

int		gnl6(void)
{
	int		fd;
	int		res;
	char	*line;

	fd = open("./gnl/file6", O_RDONLY);
	res = get_next_line(fd, &line);
	if (strcmp(line, "NOFCKINGNEWLINE") || res != 1)
	{
		free(line);
		close(fd);
		return (FAILURE);
	}
	res = get_next_line(fd, &line);
	if (res != 0)
	{
		free(line);
		close(fd);
		return (FAILURE);
	}
	free(line);
	close(fd);
	return (SUCCESS);
}
