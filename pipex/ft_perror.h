/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perror.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 11:33:40 by jmartel           #+#    #+#             */
/*   Updated: 2019/02/02 19:37:26 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERROR_H
# define FT_PERROR_H

/*
** Macros for display
*/
# define MS_ERR_COLOR	COLOR_PINK
# define SH_NAME		"pipex"

/*
** Colors macros
*/
# define COLOR_BLACK	"\033[1;30m"
# define COLOR_RED		"\033[1;31m"
# define COLOR_GREEN	"\033[1;32m"
# define COLOR_YELLOW	"\033[1;33m"
# define COLOR_BLUE		"\033[1;34m"
# define COLOR_PINK		"\033[1;35m"
# define COLOR_CYAN		"\033[1;36m"
# define COLOR_GREY		"\033[1;37m"
# define COLOR_END		"\033[1;m"

/*
** Error and return codes
*/
# define MS_ERR_CMD_NOT_FOUND	100
# define MS_ERR_MALLOC			101
# define MS_ERR_NOT_ENOU_ARGS	102
# define MS_ERR_TOO_MUCH_ARGS	103
# define MS_ERR_CANT_OPEN		104
# define MS_ERR_USR				105

# define MS_ERR2_NO_SUCH		200
# define MS_ERR2_PERM_DENIED	201
# define MS_ERR2_NOT_A_DIR		202
# define MS_ERR2_STR_NOT_IN_PWD	203
# define MS_ERR2_ENV_NOT_SET	204
# define MS_ERR2_INVALID_ARG	205
# define MS_ERR2_NOT_A_REG		206
# define MS_ERR2_USR			207

# define SUCCESS				0
# define FAILURE				1

#endif
