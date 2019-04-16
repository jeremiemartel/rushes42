/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_tricky2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 19:50:02 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/01 19:50:52 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include "libunit.h"

int			atoi_tricky2(void)
{
	if (ft_atoi("\n\n162") == atoi("\n\n162"))
		return (SUCCESS);
	else
		return (FAILURE);
}
