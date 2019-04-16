# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/01 09:31:54 by jmartel           #+#    #+#              #
#    Updated: 2018/12/02 18:42:46 by jmartel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libunit-test

SRCS	+= ./main.c

SRCS	+= 	./buse/00_launcher.c\
			./ok/00_launcher.c\
			./ko/00_launcher.c\
			./segf/00_launcher.c\
			./buse/01_buse_test.c\
			./ok/01_ok_test.c\
			./ko/01_ko_test.c\
			./segf/01_segf_test.c

OBJ		= $(SRCS:.c=.o)

INCLUDES= -I ./ -I ../framework/

LIB		= ../framework/libunit.a 
LIBDIR	= ../framework/ 
LIBFLAG	= -L../framework/ -lunit

CC		= gcc
CFLAGS	= -Wall -Werror -Wextra $(INCLUDES)

.PHONY	: all clean fclean re test libs libsre

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
