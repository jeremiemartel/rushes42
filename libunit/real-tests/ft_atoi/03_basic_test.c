/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 19:43:29 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/01 19:49:09 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "libunit.h"

int			atoi_basic3(void)
{
	if (ft_atoi("-8547.8") == atoi("-8547.8"))
		return (SUCCESS);
	else
		return (FAILURE);
}
