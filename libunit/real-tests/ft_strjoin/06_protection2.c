/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_protection2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 14:45:05 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/02 17:53:29 by thberrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"
#include <string.h>

int		strjoin_protection2(void)
{
	int		ret;
	char	*s;

	s = ft_strjoin(NULL, "abc");
	ret = strcmp(s, "abc");
	free(s);
	if (!ret)
		return (SUCCESS);
	return (FAILURE);
}
