/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_maxint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 19:44:59 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/01 19:49:26 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "libunit.h"

int			atoi_maxint(void)
{
	if (ft_atoi("2147483647") == atoi("2147483647"))
		return (SUCCESS);
	else
		return (FAILURE);
}
