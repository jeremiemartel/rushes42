/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 14:27:39 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/02 17:55:33 by thberrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"
#include <string.h>

int		strjoin_basic2(void)
{
	char	*s1;
	char	*s2;
	int		ret;

	s1 = ft_strjoin("Rights will be determined", " using this time");
	s2 = "Rights will be determined using this time";
	ret = strcmp(s1, s2);
	free(s1);
	if (!ret)
		return (SUCCESS);
	return (FAILURE);
}
