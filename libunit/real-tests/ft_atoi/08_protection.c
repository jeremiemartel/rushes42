/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_protection.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 09:51:13 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/01 19:59:24 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libunit.h"

int			atoi_protection(void)
{
	if (ft_atoi(NULL) == 0)
		return (SUCCESS);
	else
		return (FAILURE);
}
