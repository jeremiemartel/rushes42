/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 19:44:41 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/01 19:49:21 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "libunit.h"

int			atoi_basic4(void)
{
	if (ft_atoi("-5896 89") == atoi("-5896 89"))
		return (SUCCESS);
	else
		return (FAILURE);
}
