/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12_tricky3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 19:50:06 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/01 19:51:08 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "libunit.h"

int			atoi_tricky3(void)
{
	if (ft_atoi(".92") == atoi(".92"))
		return (SUCCESS);
	else
		return (FAILURE);
}
