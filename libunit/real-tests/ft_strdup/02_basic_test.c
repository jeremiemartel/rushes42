/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 09:50:03 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/02 17:43:56 by thberrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include "libunit.h"

int			strdup_basic2(void)
{
	int		ret;
	char	*s1;
	char	*s2;

	s1 = "Ph’nglui mglw’nafh Cthulhu R’lyeh wgah’nagl fhtagn...";
	s2 = ft_strdup(s1);
	ret = strcmp(s1, s2);
	free(s2);
	if (!ret)
		return (SUCCESS);
	else
		return (FAILURE);
}
