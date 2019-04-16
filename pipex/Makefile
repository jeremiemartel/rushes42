# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/03 11:38:17 by jmartel           #+#    #+#              #
#    Updated: 2019/02/03 11:02:13 by jmartel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= pipex

SRCS	=	./main.c
SRCS	+=	./pipex_parse.c ./pipex_parse_files.c ./pipex_parse_cmd.c
SRCS	+=	./pipex_fork.c
SRCS	+=	./t_pipex.c
SRCS	+=	./ft_perror.c

OBJS	= $(SRCS:.c=.o)

HEADER	= ./pipex.h

INCLUDES= -I. -I./libftprintf/ -I./libftprintf/ft_printf

LIBFLAG	= -L./libftprintf/ -lftprintf

LIBFT	= ./libftprintf/libftprintf.a

CC		= gcc
CFLAGS	= $(INCLUDES) -Wall -Werror -Wextra #-g3 -fsanitize=address

.PHONY: all, clean, fclean, re

################################# BASIC RULES #################################

all: $(NAME)

$(NAME): $(LIBFT) $(OBJS) $(HEADER)
	@$(CC) -o $(NAME) $(CFLAGS) $(SRCS) $(LIBFLAG) && echo "\033[32mSuccessfully compiled $(NAME) \033[0m"

clean: libft_clean
	@rm -f $(OBJS)
	
fclean: libft_fclean clean
	@rm -f $(NAME)

re: fclean all

rere_clean:
	@rm -f $(OBJS) $(NAME)

rere: rere_clean $(NAME)

################################# LIBFT RULES #################################

$(LIBFT):
	make -C libftprintf all
libft_clean:
	make -C libftprintf clean
libft_fclean:
	make -C libftprintf fclean
libft_re:
	make -C libftprintf re
