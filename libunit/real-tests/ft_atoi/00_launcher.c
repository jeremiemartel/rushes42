/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 09:47:45 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/01 21:23:37 by thberrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"
#include "libunit.h"
#include "libft.h"

int			atoi_launcher(void)
{
	t_test		*start;

	start = NULL;
	libunit_display_header("ft_atoi");
	load_test(&start, "basic test1", &(atoi_basic1));
	load_test(&start, "basic test2", &(atoi_basic2));
	load_test(&start, "basic test3", &(atoi_basic3));
	load_test(&start, "basic test4", &(atoi_basic4));
	load_test(&start, "max int", &(atoi_maxint));
	load_test(&start, "min int", &(atoi_minint));
	load_test(&start, "empty test", &(atoi_empty));
	load_test(&start, "protection", &(atoi_protection));
	load_test(&start, "tricky1", &(atoi_tricky1));
	load_test(&start, "tricky2", &(atoi_tricky2));
	load_test(&start, "tricky3", &(atoi_tricky3));
	load_test(&start, "tricky4", &(atoi_tricky4));
	return (launch_test(start));
}
