/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_empty2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 14:29:08 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/02 17:55:49 by thberrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"
#include <string.h>

int		strjoin_empty2(void)
{
	char	*s;
	int		ret;

	s = ft_strjoin("", "");
	ret = strcmp(s, "");
	free(s);
	if (!ret)
		return (SUCCESS);
	return (FAILURE);
}
