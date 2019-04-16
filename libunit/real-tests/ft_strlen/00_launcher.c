/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 09:47:45 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/01 15:33:22 by thberrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"
#include "libunit.h"
#include "libft.h"

int			strlen_launcher(void)
{
	t_test		*start;

	start = NULL;
	libunit_display_header("ft_strlen");
	load_test(&start, "basic test1", &(strlen_basic1));
	load_test(&start, "basic test2", &(strlen_basic2));
	load_test(&start, "empty test", &(strlen_empty));
	load_test(&start, "protection", &(strlen_protection));
	return (launch_test(start));
}
