/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_protection_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 09:51:13 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/02 17:41:45 by thberrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "libunit.h"

int			strdup_protection(void)
{
	if (ft_strdup(NULL) == 0)
		return (SUCCESS);
	else
		return (FAILURE);
}
