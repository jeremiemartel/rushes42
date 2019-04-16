/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 09:47:45 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/01 18:58:45 by thberrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_test.h"
#include "libunit.h"
#include "libft.h"

int		strjoin_launcher(void)
{
	t_test		*start;

	start = NULL;
	libunit_display_header("ft_join");
	load_test(&start, "basic test1", &(strjoin_basic));
	load_test(&start, "basic test2", &(strjoin_basic2));
	load_test(&start, "empty", &(strjoin_empty));
	load_test(&start, "empty2", &(strjoin_empty2));
	load_test(&start, "protection1", &(strjoin_protection1));
	load_test(&start, "protection2", &(strjoin_protection2));
	load_test(&start, "protection3", &(strjoin_protection3));
	return (launch_test(start));
}
