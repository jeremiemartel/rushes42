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

typedef struct s_pipex
{
	int		fdin;
	int		fdout;
	char	**cmd;
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
t_list			*pipex_parse(int argc, char **argv, char **env);

/*
** pipex_parse_cmd.c
*/
int				pipex_parse_path(t_pipex *pipex, char **env);
int				pipex_parse_cmd(t_list **pipex, int argc, char **argv);

/*
** pipex_fork.c
*/
int				pipex_pre_fork(t_list *list);
int				pipex_fork(t_list *list, char **env);

/*
** t_pipex.c
*/
t_pipex			*t_pipex_new(void);
void			t_pipex_put_list(t_list *list);
void			t_pipex_put(t_pipex *pipex);
void			t_pipex_free(void *pipex, size_t size);

/*
** ft_perror.c
*/
int				ft_perror(const char *s, int err);
int				ft_perror2(char *s1, char *s2, int err);

#endif
