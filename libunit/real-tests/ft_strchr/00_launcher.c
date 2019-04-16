/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 09:47:45 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/01 19:41:16 by thberrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"
#include "libunit.h"
#include "libft.h"

int		strchr_launcher(void)
{
	t_test		*start;

	start = NULL;
	libunit_display_header("ft_strchr");
	load_test(&start, "basic test1", &(strchr_basic1));
	load_test(&start, "basic test2", &(strchr_basic2));
	load_test(&start, "basic test3", &(strchr_basic3));
	return (launch_test(start));
}
