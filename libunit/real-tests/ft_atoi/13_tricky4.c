/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13_tricky4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 19:50:09 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/01 19:51:26 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "libunit.h"

int			atoi_tricky4(void)
{
	if (ft_atoi("            -25") == atoi("            -25"))
		return (SUCCESS);
	else
		return (FAILURE);
}
