/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thberrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 20:19:18 by thberrid          #+#    #+#             */
/*   Updated: 2018/12/01 21:10:17 by thberrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"
#include <string.h>

int		strchr_basic3(void)
{
	char	*s;

	s = "Aloa";
	if (ft_strchr(s, 'B') == strchr(s, 'B'))
		return (SUCCESS);
	return (FAILURE);
}
