/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_empty.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 14:27:45 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/02 17:48:38 by thberrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"
#include <string.h>

int		strjoin_empty(void)
{
	int		ret;
	char	*s;

	s = ft_strjoin("", "abc");
	ret = strcmp(s, "abc");
	free(s);
	if (strcmp(ft_strjoin("", "abc"), "abc") == 0)
		return (SUCCESS);
	return (FAILURE);
}
