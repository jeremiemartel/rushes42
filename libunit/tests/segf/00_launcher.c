/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 14:09:55 by thberrid          #+#    #+#             */
/*   Updated: 2018/12/01 19:07:33 by thberrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "tests.h"

int		segf_launcher(void)
{
	t_test		*start;

	start = NULL;
	libunit_display_header("SEGFAULT");
	load_test(&start, "SEGF test", &(segf_test1));
	return (launch_test(start));
}
