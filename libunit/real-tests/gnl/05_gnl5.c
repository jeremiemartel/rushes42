/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_gnl5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 20:15:33 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/02 18:28:16 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include "libunit.h"
#include <fcntl.h>

int		gnl5(void)
{
	int		fd1;
	int		i;
	char	*line;

	fd1 = open("./gnl/file5", O_RDONLY);
	i = 0;
	while (get_next_line(fd1, &line) == 1)
	{
		if (strcmp(line, "memelignememelignememelignememeligne"))
		{
			free(line);
			close(fd1);
			return (FAILURE);
		}
		i++;
	}
	if (i != 980)
	{
		free(line);
		close(fd1);
		return (FAILURE);
	}
	close(fd1);
	free(line);
	return (SUCCESS);
}
