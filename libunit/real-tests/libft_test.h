/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_test.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 09:55:13 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/01 21:20:30 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_TEST_H
# define LIBFT_TEST_H

# include "libft.h"

/*
**ft_strlen
*/
int			strlen_launcher(void);
int			strlen_basic1(void);
int			strlen_basic2(void);
int			strlen_empty(void);
int			strlen_protection(void);

/*
** ft_strdup
*/
int			strdup_launcher(void);
int			strdup_basic1(void);
int			strdup_basic2(void);
int			strdup_empty(void);
int			strdup_protection(void);

/*
** ft_strjoin
*/
int			strjoin_launcher(void);
int			strjoin_basic(void);
int			strjoin_basic2(void);
int			strjoin_empty(void);
int			strjoin_empty2(void);
int			strjoin_protection1(void);
int			strjoin_protection2(void);
int			strjoin_protection3(void);

/*
** ft_atoi
*/
int			atoi_launcher(void);
int			atoi_basic1(void);
int			atoi_basic2(void);
int			atoi_basic3(void);
int			atoi_basic4(void);
int			atoi_maxint(void);
int			atoi_minint(void);
int			atoi_empty(void);
int			atoi_protection(void);
int			atoi_tricky1(void);
int			atoi_tricky2(void);
int			atoi_tricky3(void);
int			atoi_tricky4(void);

/*
** ft_strchr
*/
int			strchr_launcher(void);
int			strchr_basic1(void);
int			strchr_basic2(void);
int			strchr_basic3(void);

/*
** gnl
*/
int			gnl_launcher(void);
int			gnl1(void);
int			gnl2(void);
int			gnl3(void);
int			gnl4(void);
int			gnl5(void);
int			gnl6(void);

#endif
