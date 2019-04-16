/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_gnl4.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 20:15:30 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/02 18:28:11 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include "libunit.h"
#include <fcntl.h>

int		gnl4(void)
{
	int		fd1;
	int		fd2;
	int		res;
	char	*line;

	fd1 = open("./gnl/file4.1", O_RDONLY);
	fd2 = open("./gnl/file4.2", O_RDONLY);
	res = get_next_line(fd1, &line);
	if (res != 1 || strcmp(line, "file4 : line1"))
	{
		close(fd1);
		close(fd2);
		free(line);
		return (FAILURE);
	}
	res = get_next_line(fd1, &line);
	if (res != 1 || strcmp(line, "file4 : line2"))
	{
		close(fd1);
		close(fd2);
		free(line);
		return (FAILURE);
	}
	res = get_next_line(fd2, &line);
	if (res != 1 || strcmp(line, "Second file : line 1"))
	{
		close(fd1);
		close(fd2);
		free(line);
		return (FAILURE);
	}
	res = get_next_line(fd2, &line);
	if (res != 1 || strcmp(line, "Second file : line 2"))
	{
		close(fd1);
		close(fd2);
		free(line);
		return (FAILURE);
	}
	res = get_next_line(fd1, &line);
	if (res != 1 || strcmp(line, "file4 : line3"))
	{
		close(fd1);
		close(fd2);
		free(line);
		return (FAILURE);
	}
	res = get_next_line(fd1, &line);
	if (res != 0)
	{
		close(fd1);
		close(fd2);
		free(line);
		return (FAILURE);
	}
	res = get_next_line(fd2, &line);
	if (res != 1 || strcmp(line, "Second file : line 3"))
	{
		close(fd1);
		close(fd2);
		free(line);
		return (FAILURE);
	}
	res = get_next_line(fd2, &line);
	if (res != 1 || strcmp(line, ""))
	{
		close(fd1);
		close(fd2);
		free(line);
		return (FAILURE);
	}
	res = get_next_line(fd2, &line);
	if (res != 0)
	{
		close(fd1);
		close(fd2);
		free(line);
		return (FAILURE);
	}
	close(fd1);
	close(fd2);
	free(line);
	return (SUCCESS);
}
