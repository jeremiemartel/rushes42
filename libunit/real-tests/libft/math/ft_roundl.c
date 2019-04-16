/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_roundl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 14:07:04 by callard           #+#    #+#             */
/*   Updated: 2018/12/07 12:45:20 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long double		ft_roundl(long double x)
{
	long long int		nb;

	if (x < 0)
		x -= 0.5;
	else
		x += 0.5;
	nb = (long long int)x;
	return ((long double)nb);
}
