/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_parse_cmd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 12:56:48 by jmartel           #+#    #+#             */
/*   Updated: 2019/02/03 12:04:20 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

/*
** get_env_var: reused function, return value of an env var if it exist
**		else it return NULL
*/

static char	*get_env_var(char **env, char *var)
{
	int		i;
	int		j;

	i = 0;
	if (!var || !env || !*env)
		return (NULL);
	while (env[i])
	{
		j = 0;
		while (env[i][j] != '=' &&
			(var[j] && !ft_iswhite(var[j]) && var[j] != '='))
		{
			if (env[i][j] != var[j])
				break ;
			j++;
		}
		if (env[i][j] == '=' &&
				(var[j] == 0 || ft_iswhite(var[j]) || var[j] == '='))
			return (env[i] + j + 1);
		i++;
	}
	return (NULL);
}

/*
** pipex_parse_cmd: look for binaries cmd in PATH env variable
**		if found it stock the path in pipex, and it stock args as a table
*/

int			pipex_parse_cmd(t_pipex *pipex, char *c1, char *c2, char **env)
{
	char		**split;
	int			i;
	DIR			*dir;

	if (!(pipex->cmd2 = ft_split_whitespaces(c2))
		|| !(pipex->cmd1 = ft_split_whitespaces(c1)))
		return (FAILURE);
	if (!(get_env_var(env, "PATH")))
		return (ft_perror("PATH var is not set in environment", MS_ERR_USR));
	if (!(split = ft_strsplit(get_env_var(env, "PATH"), ':')))
		return (FAILURE);
	i = 0;
	while (split[i] && (!pipex->path1 || !pipex->path2))
	{
		if (!(dir = opendir(split[i])))
		{
			i++;
			continue ;
		}
		pipex_parse_cmd_readdir(pipex, split[i], dir);
		closedir(dir);
		i++;
	}
	ft_strtab_free(split);
	return (SUCCESS);
}

/*
** pipex_parse_cmd_readdir: look for binaries for cmd1 and cmd2,
**		in one of PATH dir
**		return FAILURE if any malloc error occures
*/

int			pipex_parse_cmd_readdir(t_pipex *pipex, char *path, DIR *dir)
{
	t_dirent	*dirent;

	while ((dirent = readdir(dir)))
	{
		if (pipex->cmd1 && ft_strequ((pipex->cmd1)[0], dirent->d_name))
			if (!(pipex->path1 = ft_strjoin_path(path, dirent->d_name)))
				return (FAILURE);
		if (pipex->cmd2 && ft_strequ((pipex->cmd2)[0], dirent->d_name))
			if (!(pipex->path2 = ft_strjoin_path(path, dirent->d_name)))
				return (FAILURE);
	}
	return (SUCCESS);
}
