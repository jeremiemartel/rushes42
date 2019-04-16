# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/01 09:31:54 by jmartel           #+#    #+#              #
#    Updated: 2018/12/02 19:33:30 by jmartel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libunit-test

SRCS	+= ./main.c

SRCS	+=	./ft_strchr/00_launcher.c \
			./ft_strchr/01_basic.c \
			./ft_strchr/02_basic.c \
			./ft_strchr/03_basic.c

SRCS	+=	./ft_strlen/00_launcher.c \
			./ft_strlen/01_basic_test.c \
			./ft_strlen/02_basic_test.c \
			./ft_strlen/03_empty_test.c \
			./ft_strlen/04_protection_test.c

SRCS	+= ./ft_strdup/00_launcher.c \
			./ft_strdup/01_basic_test.c \
			./ft_strdup/02_basic_test.c \
			./ft_strdup/03_empty_test.c \
			./ft_strdup/04_protection_test.c

SRCS	+= ./ft_strjoin/00_launcher.c \
			./ft_strjoin/01_basic.c \
			./ft_strjoin/02_basic2.c \
			./ft_strjoin/03_empty.c \
			./ft_strjoin/04_empty2.c \
			./ft_strjoin/05_protection1.c\
			./ft_strjoin/06_protection2.c\
			./ft_strjoin/07_protection3.c

SRCS	+= ./ft_atoi/00_launcher.c\
			./ft_atoi/01_basic_test.c \
			./ft_atoi/02_basic_test.c \
			./ft_atoi/03_basic_test.c \
			./ft_atoi/04_basic_test.c \
			./ft_atoi/05_maxint.c     \
			./ft_atoi/06_minint.c     \
			./ft_atoi/07_empty.c      \
			./ft_atoi/08_protection.c \
			./ft_atoi/09_tricky1.c    \
			./ft_atoi/10_tricky2.c    \
			./ft_atoi/12_tricky3.c    \
			./ft_atoi/13_tricky4.c

SRCS	+= ./gnl/00_launcher.c\
			./gnl/01_gnl1.c\
			./gnl/02_gnl2.c\
			./gnl/03_gnl3.c\
			./gnl/04_gnl4.c\
			./gnl/05_gnl5.c\
			./gnl/06_gnl6.c

SRCS	+= 	./fillit/00_launcher.c\
			./fillit/01_fillit1.c\
			./fillit/02_fillit2.c\
			./fillit/03_filit3.c\
			./fillit/04_filit4.c\
			./fillit/05_filit5.c\
			./fillit/06_filit6.c\
			./fillit/07_filit7.c\
			./fillit/08_filit8.c

OBJ		= $(SRCS:.c=.o)

INCLUDES= -I ./ -I ../framework/ -I ./libft/

LIB		= ../framework/libunit.a ./libft/libft.a
LIBDIR	= ../framework/ ./libft
LIBFLAG	= -L../framework/ -lunit -L./libft/ -lft

CC		= gcc
CFLAGS	= -Wall -Werror -Wextra $(INCLUDES)

.PHONY	: all clean fclean re test libs libre

all: libs $(NAME)

$(NAME): $(OBJ) $(LIB)
	for i in $(LIBDIR); do (make -C $$i all); done
	$(CC) -o $(NAME) $(CFLAGS) $(SRCS) $(LIBFLAG)

libs:
	for i in $(LIBDIR); do (make -C $$i all); done

libsre:
	for i in $(LIBDIR); do (make -C $$i re); done

clean:
	for i in $(LIBDIR); do (make -C $$i clean); done
	rm -f $(OBJ)

fclean: clean
	for i in $(LIBDIR); do (make -C $$i fclean); done
	rm -f $(NAME)

re: fclean libs $(NAME)

test: all
	./$(NAME)
