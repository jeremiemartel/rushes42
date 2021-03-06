/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:11:38 by jmartel           #+#    #+#             */
/*   Updated: 2019/01/10 17:50:20 by jmartel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "./gnl/get_next_line.h"
# include <unistd.h>
# include <string.h>
# include <stdlib.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

/*
********************************** ATOI  **************************************
*/
char				*ft_ltoa(long l, int base);
char				*ft_lltoa(long long l, int base);
char				*ft_ulltoa(unsigned long long l, int base);
char				*ft_ftoa(long double f, int prec);
int					ft_atoi(const char *str);
char				*ft_itoa(int n);

/*
********************************** lst  ***************************************
*/
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
size_t				ft_lstlen(t_list *start);
void				ft_lstadd_last(t_list **start, t_list *new);
void				ft_lstput_fd(t_list *start, int fd);

/*
********************************** math  **************************************
*/
int					ft_max(int a, int b);
int					ft_min(int a, int b);
int					ft_abs(int a);
long				ft_pow(long x, long y);
float				ft_roundf(float x);
long double			ft_roundl(long double x);
size_t				ft_longlen(long nb);

/*
********************************** mem  ***************************************
*/
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void	*s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);

/*
********************************** put  ***************************************
*/
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putcharn(char c);
void				ft_putstrn(char *str);
void				ft_putnbrn(int nb);

/*
********************************** str  ***************************************
*/

size_t				ft_strlen(const char *s);
size_t				ft_strnlen(const char *s, size_t maxlen);
char				*ft_strdup(const char *s1);
char				*ft_strndup(const char *str, size_t n);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *str, const char *find);
char				*ft_strnstr(const char *str, const char *find, size_t len);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);

int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_iswhite(char c);
int					ft_toupper(int c);
int					ft_tolower(int c);

char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char *s, char (*f)(unsigned int, char));
int					ft_strequ(const char *s1, const char *s2);
int					ft_strnequ(const char *s1, const char *s2, size_t n);
char				*ft_strsub(const char *s, unsigned int start, size_t len);
char				*ft_strjoin(const char *s1, const char *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);

void				ft_strrev(char *str);
int					ft_strstr_count(char *str, char *pattern);
char				*ft_strtolower(char *str);

char				*ft_strjoin_free(const char *s1, const char *s2, int param);
char				*ft_strinsert_free(char *s1, char *s2, int pos, int param);
char				*ft_strjoin_path(char *s1, char *s2);
char				*ft_strrep_free(char *s1, char *s2, char *pat, int param);

char				**ft_split_whitespaces(char *str);
void				ft_strtab_free(char **tab);
void				ft_strtab_put(char **tab);
int					ft_strtab_len(char **tab);

#endif
