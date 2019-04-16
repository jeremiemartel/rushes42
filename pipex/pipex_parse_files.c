/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_parse_files.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 12:00:37 by jmartel           #+#    #+#             */
/*   Updated: 2019/02/03 11:48:35 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

/*
** pipex_parse_files : check existence, rights, ... of in and out files
**	if possible it open infile and stock the fd
**	it clean and open outfile and stock the fd
**	if outfile == 1, result of pipes will be sent to stdout
*/

int				pipex_parse_files(t_pipex *pipex, char *infile, char *outfile)
{
	if (pipex_parse_files_access(infile, outfile))
		return (FAILURE);
	if (ft_strequ(outfile, "1"))
		pipex->fdout = 1;
	else if ((pipex->fdout = open(outfile, O_CREAT | O_WRONLY, S_IRWXU)) == -1)
		return (ft_perror(outfile, MS_ERR_CANT_OPEN));
	if ((ftruncate(pipex->fdout, 0) == -1))
		return (ft_perror("Can't truncate outfile", MS_ERR_USR));
	if ((pipex->fdin = open(infile, O_RDONLY)) == -1)
		return (ft_perror(infile, MS_ERR_CANT_OPEN));
	if (!(pipex->infile = ft_strdup(infile)))
		return (ft_perror("pipex_parse_files (1)", MS_ERR_MALLOC));
	if (!(pipex->outfile = ft_strdup(outfile)))
		return (ft_perror("pipex_parse_files (2)", MS_ERR_MALLOC));
	return (SUCCESS);
}

/*
** pipex_parse_files_access : Check existence, rights, for both files
**	return : SUCCES or FAILURE, and it put error message if needed
*/

int				pipex_parse_files_access(char *infile, char *outfile)
{
	t_stat	statb;
	int		ret;

	ret = 0;
	if (stat(infile, &statb) == -1 && !ret++)
		ft_perror2("No such file or directory : ", infile, MS_ERR2_USR);
	else if (!(S_ISREG(statb.st_mode)) && !ret++)
		ft_perror2("Not a regular file : ", infile, MS_ERR2_USR);
	else if (access(infile, R_OK) == -1 && !ret++)
		ft_perror2("Permission denied : ", infile, MS_ERR2_USR);
	if (ft_strequ("1", outfile))
		return (SUCCESS);
	if (stat(outfile, &statb) == -1 && !ret++)
		return (SUCCESS);
	else if (access(outfile, W_OK) == -1 && !ret++)
		ft_perror2("Permission denied : ", outfile, MS_ERR2_USR);
	if (ret)
		return (FAILURE);
	return (SUCCESS);
}
