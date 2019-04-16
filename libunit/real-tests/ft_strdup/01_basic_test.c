/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 09:47:48 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/02 17:37:39 by thberrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include "libunit.h"

int			strdup_basic1(void)
{
	char	*s;
	int		ret;

	s = ft_strdup("42");
	ret = strcmp(s, "42");
	free(s);
	if (!ret)
		return (SUCCESS);
	else
		return (FAILURE);
}
