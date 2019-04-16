/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_gnl3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 20:15:27 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/02 18:28:02 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include "libunit.h"
#include <fcntl.h>

int		gnl3(void)
{
	int		fd;
	char	*line;

	fd = open("./gnl/file3", O_RDONLY);
	get_next_line(fd, &line);
	get_next_line(fd, &line);
	if (strcmp(line, "qwertyuiopasdfghjklzxcvbnm") == 0)
	{
		free(line);
		close(fd);
		return (SUCCESS);
	}
	free(line);
	close(fd);
	return (FAILURE);
}
