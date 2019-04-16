/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 14:24:07 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/02 17:55:00 by thberrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"
#include <string.h>

int		strjoin_basic(void)
{
	char	*s;
	int		ret;

	s = ft_strjoin("abc", "def");
	ret = strcmp(s, "abcdef");
	free(s);
	if (!ret)
		return (SUCCESS);
	return (FAILURE);
}
