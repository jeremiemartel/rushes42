/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_bigprec1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 18:13:56 by jmartel           #+#    #+#             */
/*   Updated: 2019/01/14 16:34:49 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "ft_printf_test.h"

int			bigprec1(void)
{
	int		pipeans[2];
	int		pipecor[2];
	int		ians;
	int		icor;
	char	ans[READING_SIZE + 1];
	char	cor[READING_SIZE + 1];

	if (pipe(pipeans) == -1)
		exit(INTERNAL_FAILURE);
	if (dup2(pipeans[1], 1) == -1)
		exit(-1);
	if (pipe(pipecor) == -1)
		exit(INTERNAL_FAILURE);
	if (dup2(pipecor[1], 2) == -1)
		exit(-1);

	int		nb;
	nb = 0;
	ft_printf("big prec : %+.420d ", nb);
	nb = 8;
	ft_printf("big prec : %+.42d ", nb);
	nb = -1234212;
	ft_printf("big prec : %.12d ", nb);
	nb = -1;
	ft_printf("big prec : %+.23d ", nb);
	nb = 12354;
	ft_printf("big prec : %+.250d ", nb);

	nb = 0;
	dprintf(2, "big prec : %+.420d ", nb);
	nb = 8;
	dprintf(2, "big prec : %+.42d ", nb);
	nb = -1234212;
	dprintf(2, "big prec : %.12d ", nb);
	nb = -1;
	dprintf(2, "big prec : %+.23d ", nb);
	nb = 12354;
	dprintf(2, "big prec : %+.250d ", nb);


	close(pipeans[1]);
	close(pipecor[1]);
	ians = read(pipeans[0], ans, READING_SIZE);
	icor = read(pipecor[0], cor, READING_SIZE);
	close(pipeans[0]);
	close(pipecor[0]);
	ans[ians] = 0;
	cor[icor] = 0;
	if (strcmp(cor, ans) == 0)
		exit (SUCCESS);
	exit(FAILURE);
}
