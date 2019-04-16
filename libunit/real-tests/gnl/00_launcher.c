/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_gnl_launcher.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 20:22:38 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/01 20:39:36 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"
#include "libunit.h"
#include "libft.h"

int			gnl_launcher(void)
{
	t_test		*start;

	start = NULL;
	libunit_display_header("get_next_line");
	load_test(&start, "test1", &(gnl1));
	load_test(&start, "test2", &(gnl2));
	load_test(&start, "test3", &(gnl3));
	load_test(&start, "multi fd", &(gnl4));
	load_test(&start, "big file", &(gnl5));
	load_test(&start, "no new line", &(gnl6));
	return (launch_test(start));
}
