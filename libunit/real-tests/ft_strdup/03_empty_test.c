/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_empty_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 09:50:53 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/02 17:41:09 by thberrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include "libunit.h"

int			strdup_empty(void)
{
	int		ret;
	char	*s;

	s = ft_strdup("");
	ret = strcmp(s, "");
	free(s);
	if (!ret)
		return (SUCCESS);
	else
		return (FAILURE);
}
