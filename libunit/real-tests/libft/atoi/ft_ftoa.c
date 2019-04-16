/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 17:09:34 by callard           #+#    #+#             */
/*   Updated: 2018/12/07 12:44:17 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_nbrlen(int l)
{
	int		nb;

	nb = 0;
	while (l > 0)
	{
		nb++;
		l = l / 10;
	}
	return (nb);
}

static void		ft_ftoa_body(char *str, long power, long double f, int prec)
{
	int		i;
	char	n;

	i = ft_strlen(str);
	while (power >= 1)
	{
		n = (char)(f / power);
		f -= (n * power);
		power /= 10;
		str[i] = n + '0';
		i++;
	}
	power = ft_pow(10, prec);
	if (prec == 0)
		return ;
	str[i] = '.';
	i++;
	while (prec-- > 0)
	{
		f *= 10;
		n = (char)f;
		f -= n;
		str[i] = n + '0';
		i++;
	}
}

char			*ft_ftoa(long double f, int prec)
{
	char	*str;
	long	power;
	int		len;
	int		neg;

	neg = 1;
	power = ft_pow(10, prec);
	if (f < 0)
		neg = -1;
	f = (ft_roundl(f * power) / power) * neg;
	len = ft_nbrlen((int)f) + prec;
	if (prec != 0)
		len += 1;
	if (neg == -1)
		len += 1;
	if (!(str = ft_strnew(len)))
		return (NULL);
	power = 1;
	while (power * 10 <= f)
		power *= 10;
	if (neg == -1)
		str[0] = '-';
	ft_ftoa_body(str, power, f, prec);
	return (str);
}
