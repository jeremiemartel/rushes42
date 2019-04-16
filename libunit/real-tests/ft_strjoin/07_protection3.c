/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_protection3.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 14:45:29 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/02 17:54:33 by thberrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "libft.h"

int		strjoin_protection3(void)
{
	if (ft_strjoin(NULL, NULL) == 0)
		return (SUCCESS);
	return (FAILURE);
}
