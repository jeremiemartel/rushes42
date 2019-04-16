/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 14:07:08 by thberrid          #+#    #+#             */
/*   Updated: 2018/12/01 21:50:00 by thberrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "tests.h"

int		ok_launcher(void)
{
	t_test		*start;

	start = NULL;
	libunit_display_header("OK");
	load_test(&start, "OK test", &(ok_test1));
	return (launch_test(start));
}
