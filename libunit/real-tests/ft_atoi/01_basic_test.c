/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 09:47:48 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/02 19:32:30 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "libunit.h"

int			atoi_basic1(void)
{
	if (ft_atoi("42") == atoi("42"))
		return (SUCCESS);
	else
		return (FAILURE);
}
