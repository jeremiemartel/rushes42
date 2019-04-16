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

int			pipex_parse_path(t_pipex *pipex, char **env)
{
	char		**split;
	int			i;
	DIR			*dir;
	int			ret;
	t_dirent	*dirent;

	if (!(get_env_var(env, "PATH")))
		return (ft_perror("PATH var is not set in environment", MS_ERR_USR));
	if (!(split = ft_strsplit(get_env_var(env, "PATH"), ':')))
		return (FAILURE);
	ret = 0;
	i = 0;
	while (split[i] && !ret)
	{
		if (!(dir = opendir(split[i])))
		{
			i++;
			continue ;
		}
		while ((dirent = readdir(dir)))
		{
			if (ft_strequ(pipex->cmd[0], dirent->d_name))
			{
				free(pipex->cmd[0]);
				ret = 1;
				if (!(pipex->cmd[0] = ft_strjoin_path(split[i], dirent->d_name)))
					ret = -1;
			}
		}
		i++;
		closedir(dir);
	}
	ft_strtab_free(split);
	if (ret == -1)
		return (FAILURE);
	if (ret == 0)
	{
		ft_printf("Can't find %s\n", pipex->cmd[0]);
		return (FAILURE);
	}
	return (SUCCESS);
}

int			pipex_parse_cmd(t_list **pipex, int argc, char **argv)
{
	int		i;
	t_pipex	*buff;

	i = 1;
	while (i <= argc)
	{
		buff = t_pipex_new();
		ft_lstadd_last(pipex, ft_lstnew(buff, sizeof(t_pipex)));
		buff->cmd = ft_split_whitespaces(argv[i]);
		i += 2;
	}
	return (SUCCESS);
}
