/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 14:09:20 by thberrid          #+#    #+#             */
/*   Updated: 2018/12/01 19:00:33 by thberrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "tests.h"

int		ko_launcher(void)
{
	t_test		*start;

	start = NULL;
	libunit_display_header("KO");
	load_test(&start, "KO test", &(ko_test1));
	return (launch_test(start));
}
