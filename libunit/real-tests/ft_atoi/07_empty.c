/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_empty.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 09:50:53 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/01 19:49:34 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "libunit.h"

int			atoi_empty(void)
{
	if (ft_atoi("") == atoi(""))
		return (SUCCESS);
	else
		return (FAILURE);
}
