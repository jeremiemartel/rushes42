/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 11:57:08 by callard           #+#    #+#             */
/*   Updated: 2018/12/07 12:44:35 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_ulltoa_rec(unsigned long long ul,
		unsigned long long lbase, char *str)
{
	if (ul < lbase)
	{
		if (ul % lbase < 10)
			str[0] = ul % lbase + '0';
		else
			str[0] = ul % lbase + 'A' - 10;
		return ;
	}
	else
	{
		ft_ulltoa_rec(ul / lbase, lbase, &str[1]);
		if (ul % lbase < 10)
			str[0] = ul % lbase + '0';
		else
			str[0] = ul % lbase + 'A' - 10;
	}
}

char			*ft_ulltoa(unsigned long long l, int base)
{
	char				*str;
	unsigned long long	lbase;
	int					len;

	if (l == 0)
		return (ft_strdup("0"));
	len = 0;
	lbase = (long long)base;
	if (!(str = ft_strnew(sizeof(char) * len)))
		return (NULL);
	ft_ulltoa_rec(l, lbase, str);
	ft_strrev(str);
	return (str);
}
