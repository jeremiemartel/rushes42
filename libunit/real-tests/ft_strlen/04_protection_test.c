/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_protection_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 09:51:13 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/01 14:20:30 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libunit.h"

int			strlen_protection(void)
{
	if (ft_strlen(NULL) == 0)
		return (SUCCESS);
	else
		return (FAILURE);
}
