/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perror.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/08 13:04:27 by jmartel           #+#    #+#             */
/*   Updated: 2019/02/03 11:57:47 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int			ft_perror(const char *s, int err)
{
	if (err == MS_ERR_CMD_NOT_FOUND)
		ft_dprintf(2, "%s%s: command not found: %s%s\n",
		MS_ERR_COLOR, SH_NAME, s, COLOR_END);
	else if (err == MS_ERR_CANT_OPEN)
		ft_dprintf(2, "%s%s: can't open: %s%s\n",
		MS_ERR_COLOR, SH_NAME, s, COLOR_END);
	else if (err == 11)
		ft_dprintf(2, "%s%s: segmentation fault: %s%s\n",
		MS_ERR_COLOR, SH_NAME, s, COLOR_END);
	else if (err == MS_ERR_MALLOC)
		ft_dprintf(2, "%s%s: can't allocate memory: %s%s\n",
		MS_ERR_COLOR, SH_NAME, s, COLOR_END);
	else if (err == MS_ERR_NOT_ENOU_ARGS)
		ft_dprintf(2, "%s%s: %s: not enough arguments%s\n",
		MS_ERR_COLOR, SH_NAME, s, COLOR_END);
	else if (err == MS_ERR_TOO_MUCH_ARGS)
		ft_dprintf(2, "%s%s: %s: too many arguments%s\n",
		MS_ERR_COLOR, SH_NAME, s, COLOR_END);
	else if (err == MS_ERR_USR)
		ft_dprintf(2, "%s%s%s\n", MS_ERR_COLOR, s, COLOR_END);
	else
		ft_dprintf(2, "%s%s: Unknown error code: %d%s\n",
		MS_ERR_COLOR, SH_NAME, err, COLOR_END);
	return (FAILURE);
}

int			ft_perror2(char *s1, char *s2, int err)
{
	if (err == MS_ERR2_NO_SUCH)
		ft_dprintf(2, "%s%s: %s: no such file or directory: %s%s\n",
		MS_ERR_COLOR, SH_NAME, s1, s2, COLOR_END);
	else if (err == MS_ERR2_PERM_DENIED)
		ft_dprintf(2, "%s%s: %s: permission denied: %s%s\n",
		MS_ERR_COLOR, SH_NAME, s1, s2, COLOR_END);
	else if (err == MS_ERR2_NOT_A_DIR)
		ft_dprintf(2, "%s%s: %s: not a directory: %s%s\n",
		MS_ERR_COLOR, SH_NAME, s1, s2, COLOR_END);
	else if (err == MS_ERR2_ENV_NOT_SET)
		ft_dprintf(2, "%s%s: %s: environment variable no set: %s%s\n",
		MS_ERR_COLOR, SH_NAME, s1, s2, COLOR_END);
	else if (err == MS_ERR2_INVALID_ARG)
		ft_dprintf(2, "%s%s: %s: Invalid argument: %s%s\n",
		MS_ERR_COLOR, SH_NAME, s1, s2, COLOR_END);
	else if (err == MS_ERR2_NOT_A_REG)
		ft_dprintf(2, "%s%s: %s: not a regular file: %s%s\n",
		MS_ERR_COLOR, SH_NAME, s1, s2, COLOR_END);
	else if (err == MS_ERR2_USR)
		ft_dprintf(2, "%s%s%s%s\n", MS_ERR_COLOR, s1, s2, COLOR_END);
	else
		ft_dprintf(2, "%s%s: Uknown error code: %d%s\n",
		MS_ERR_COLOR, SH_NAME, err, COLOR_END);
	return (FAILURE);
}
