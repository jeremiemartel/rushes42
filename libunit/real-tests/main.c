/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 17:08:44 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/02 19:34:02 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft_test.h"
#include "fillit_test.h"

int			main(void)
{
	strchr_launcher();
	strlen_launcher();
	strdup_launcher();
	strjoin_launcher();
	atoi_launcher();
	gnl_launcher();
	fillit_launcher();
	return (0);
}
