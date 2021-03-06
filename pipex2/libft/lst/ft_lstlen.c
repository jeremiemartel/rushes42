/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:03:50 by jmartel           #+#    #+#             */
/*   Updated: 2018/11/12 16:04:03 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstlen(t_list *start)
{
	size_t	len;

	len = 0;
	while (start != NULL)
	{
		start = start->next;
		len++;
	}
	return (len);
}
