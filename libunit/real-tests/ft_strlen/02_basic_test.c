/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 09:50:03 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/01 14:20:48 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include "libunit.h"

int			strlen_basic2(void)
{
	if (ft_strlen("Ph’nglui mglw’nafh Cthulhu R’lyeh wgah’nagl fhtagn...")
		== strlen("Ph’nglui mglw’nafh Cthulhu R’lyeh wgah’nagl fhtagn..."))
		return (SUCCESS);
	else
		return (FAILURE);
}
