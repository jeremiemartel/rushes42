/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_protection.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 14:29:15 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/02 17:56:08 by thberrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"
#include <string.h>

int		strjoin_protection1(void)
{
	int		ret;
	char	*s;

	s = ft_strjoin("abc", NULL);
	ret = strcmp(s, "abc");
	free(s);
	if (!ret)
		return (SUCCESS);
	return (FAILURE);
}
