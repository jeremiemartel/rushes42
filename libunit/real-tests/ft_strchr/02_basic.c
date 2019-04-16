/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thberrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 20:19:03 by thberrid          #+#    #+#             */
/*   Updated: 2018/12/01 21:10:07 by thberrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"
#include <string.h>

int		strchr_basic2(void)
{
	char	*s;

	s = "Aloa";
	if (ft_strchr(s, '\0') == strchr(s, '\0'))
		return (SUCCESS);
	return (FAILURE);
}
