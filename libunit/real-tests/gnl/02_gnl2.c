/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_gnl2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 20:27:51 by thberrid          #+#    #+#             */
/*   Updated: 2018/12/02 17:39:17 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include "libunit.h"
#include <fcntl.h>

int		gnl2(void)
{
	int		fd;

	fd = open("file2", O_RDONLY);
	if (get_next_line(fd, NULL) == -1)
	{
		close(fd);
		return (SUCCESS);
	}
	close(fd);
	return (FAILURE);
}
