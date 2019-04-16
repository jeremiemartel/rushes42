/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit_test.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 14:58:55 by jmartel           #+#    #+#             */
/*   Updated: 2018/12/02 19:50:46 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_TEST_H
# define FILLIT_TEST_H

/*
** dup2, write, read(2), pipe, sleep, execve, close
*/
# include <unistd.h>

/*
** read(2)
*/
# include <sys/types.h>
# include <sys/uio.h>

# define TIMEOUT_SAFE 1
# define FILLIT_PATH "./fillit_exe"

# define FILLIT1_SAMPLE "./fillit/sample1"
# define FILLIT1_LEN 33
# define FILLIT1_RES "DDAA\nCDDA\nCCCA\nBBBB\n"

# define FILLIT2_SAMPLE "./fillit/sample2"
# define FILLIT2_LEN 6
# define FILLIT2_RES "error\n"

# define FILLIT3_SAMPLE "./fillit/sample3"
# define FILLIT3_LEN 42
# define FILLIT3_RES "ABBBB.\nACCCEE\nAFFCEE\nA.FFGG\nHHHDDG\n.HDD.G\n"

# define FILLIT4_SAMPLE "./fillit/bad1"
# define FILLIT4_LEN 6
# define FILLIT4_RES "error\n"

# define FILLIT5_SAMPLE "./fillit/bad2"
# define FILLIT5_LEN 6
# define FILLIT5_RES "error\n"

# define FILLIT6_SAMPLE "./fillit/bad3"
# define FILLIT6_LEN 6
# define FILLIT6_RES "error\n"

# define FILLIT7_SAMPLE "./fillit/bad4"
# define FILLIT7_LEN 6
# define FILLIT7_RES "error\n"

# define FILLIT8_SAMPLE "./fillit/bad5"
# define FILLIT8_LEN 6
# define FILLIT8_RES "error\n"

/*
** fillit
*/
int			fillit_launcher(void);
int			fillit1(void);
int			fillit2(void);
int			fillit3(void);
int			fillit4(void);
int			fillit5(void);
int			fillit6(void);
int			fillit7(void);
int			fillit8(void);

#endif
