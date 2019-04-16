/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_minint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 19:45:08 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/03 09:29:24 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "libunit.h"

int			atoi_minint(void)
{
	if (ft_atoi("-2147483648") == atoi("-2147483648"))
		return (SUCCESS);
	else
		return (FAILURE);
}
