/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 14:07:08 by thberrid          #+#    #+#             */
/*   Updated: 2018/12/01 19:01:16 by thberrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "tests.h"

int		buse_launcher(void)
{
	t_test		*start;

	start = NULL;
	libunit_display_header("BUS ERROR");
	load_test(&start, "BUSE test", &(buse_test1));
	return (launch_test(start));
}
