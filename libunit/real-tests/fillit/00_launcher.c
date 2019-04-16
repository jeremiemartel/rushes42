/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 15:36:20 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/02 19:33:09 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "fillit_test.h"

int			fillit_launcher(void)
{
	t_test		*start;

	start = NULL;
	libunit_display_header("FILL IT");
	load_test(&start, "Sample test 1", &(fillit1));
	load_test(&start, "Sample test 2", &(fillit2));
	load_test(&start, "Sample test 3", &(fillit3));
	load_test(&start, "Bad test 1", &(fillit4));
	load_test(&start, "Bad test 2", &(fillit5));
	load_test(&start, "Bad test 3", &(fillit6));
	load_test(&start, "Bad test 4", &(fillit7));
	load_test(&start, "Bad test 5", &(fillit8));
	return (launch_test(start));
}
