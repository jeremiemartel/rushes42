/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thberrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 19:37:55 by thberrid          #+#    #+#             */
/*   Updated: 2018/12/01 21:09:59 by thberrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"
#include <string.h>

int		strchr_basic1(void)
{
	char	*s;

	s = "Aloa";
	if (ft_strchr(s, 'a') == strchr(s, 'a'))
		return (SUCCESS);
	return (FAILURE);
}
