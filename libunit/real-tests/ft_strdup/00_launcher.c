/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 09:47:45 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/01 18:58:07 by thberrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"
#include "libunit.h"
#include "libft.h"

int			strdup_launcher(void)
{
	t_test		*start;

	start = NULL;
	libunit_display_header("ft_strdup");
	load_test(&start, "basic test1", &(strdup_basic1));
	load_test(&start, "basic test2", &(strdup_basic2));
	load_test(&start, "empty test", &(strdup_empty));
	load_test(&start, "protection", &(strdup_protection));
	return (launch_test(start));
}
