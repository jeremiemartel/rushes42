/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_tricky1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 19:48:30 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/01 19:52:15 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "libunit.h"

int			atoi_tricky1(void)
{
	if (ft_atoi("\n\t-19") == atoi("\n\t-19"))
		return (SUCCESS);
	else
		return (FAILURE);
}
