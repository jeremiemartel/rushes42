/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 09:17:06 by jmartel           #+#    #+#             */
/*   Updated: 2019/02/03 11:25:33 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

/*
** malloc, free
*/
# include <stdlib.h>

/*
** execve, dup2, close
*/
# include <unistd.h>

/*
** open(2)
*/
# include <fcntl.h>

/*
** stat(2)
*/
# include <sys/stat.h>

/*
** opendir, readir, ...
*/
# include <dirent.h>

# include "libft.h"
# include "ft_perror.h"

# define CLOSED_FD		-2

typedef struct stat		t_stat;
typedef struct dirent	t_dirent;

typedef struct	s_pipex
{
	char	*infile;
	int		fdin;
	char	*outfile;
	int		fdout;
	char	*path1;
	char	**cmd1;
	char	*path2;
	char	**cmd2;
	int		pipe[2];
}				t_pipex;

/*
** main.c
*/
int				main(int argc, char **argv, char **env);
int				pipex_usage(void);
int				pipex_close(int *fd);

/*
** pipex_parse.c
*/
t_pipex			*pipex_parse(char **argv, char **env);

/*
** pipex_parse_files.c
*/
int				pipex_parse_files(t_pipex *pipex, char *infile, char *outfile);
int				pipex_parse_files_access(char *infile, char *outfile);

/*
** pipex_parse_cmd.c
*/
int				pipex_parse_cmd(t_pipex *pipex, char *c1, char *c2, char **env);
int				pipex_parse_cmd_readdir(t_pipex *pipex, char *path, DIR *dir);

/*
** pipex_fork.c
*/
int				pipex_fork(t_pipex *pipex, char **env);

/*
** t_pipex.c
*/
t_pipex			*t_pipex_new(void);
void			t_pipex_put(t_pipex *pipex);
void			t_pipex_free(t_pipex *pipex);

/*
** ft_perror.c
*/
int				ft_perror(const char *s, int err);
int				ft_perror2(char *s1, char *s2, int err);

#endif
