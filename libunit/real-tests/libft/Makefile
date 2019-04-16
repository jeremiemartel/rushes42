# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 10:28:40 by jmartel           #+#    #+#              #
#    Updated: 2019/01/12 13:44:53 by jmartel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	=	./lst/ft_lstnew.c ./lst/ft_lstdelone.c ./lst/ft_lstdel.c \
			./lst/ft_lstadd.c ./lst/ft_lstiter.c ./lst/ft_lstmap.c \
			./lst/ft_lstlen.c ./lst/ft_lstadd_last.c ./lst/ft_lstput_fd.c

SRCS	+=	./math/ft_max.c ./math/ft_min.c ./math/ft_abs.c ./math/ft_pow.c \
			./math/ft_roundf.c ./math/ft_roundl.c ./math/ft_longlen.c

SRCS	+=	./mem/ft_memset.c ./mem/ft_bzero.c ./mem/ft_memcpy.c \
			./mem/ft_memccpy.c ./mem/ft_memmove.c ./mem/ft_memchr.c \
			./mem/ft_memcmp.c ./mem/ft_memalloc.c ./mem/ft_memdel.c 

SRCS	+=	./put/ft_putchar.c ./put/ft_putstr.c ./put/ft_putendl.c \
			./put/ft_putnbr.c ./put/ft_putchar_fd.c ./put/ft_putstr_fd.c \
			./put/ft_putendl_fd.c ./put/ft_putnbr_fd.c ./put/ft_putcharn.c \
			./put/ft_putstrn.c ./put/ft_putnbrn.c

SRCS	+=	./str/ft_strlen.c ./str/ft_strdup.c ./str/ft_strcpy.c \
			./str/ft_strncpy.c ./str/ft_strcat.c ./str/ft_strncat.c \
			./str/ft_strlcat.c ./str/ft_strchr.c ./str/ft_strrchr.c \
			./str/ft_strstr.c ./str/ft_strnstr.c ./str/ft_strcmp.c \
			./str/ft_strncmp.c ./str/ft_isalpha.c ./str/ft_isdigit.c \
			./str/ft_isalnum.c ./str/ft_isprint.c ./str/ft_isascii.c \
			./str/ft_iswhite.c \
			./str/ft_tolower.c ./str/ft_toupper.c ./str/ft_strnew.c \
			./str/ft_strdel.c ./str/ft_strclr.c ./str/ft_striter.c \
			./str/ft_striteri.c ./str/ft_strmap.c ./str/ft_strmapi.c \
			./str/ft_strequ.c ./str/ft_strnequ.c ./str/ft_strsub.c \
			./str/ft_strjoin.c ./str/ft_strtrim.c ./str/ft_strsplit.c \
			./str/ft_strnlen.c ./str/ft_strrev.c ./str/ft_strstr_count.c \
			./str/ft_strtolower.c ./str/ft_strjoin_free.c \
			./str/ft_strinsert_free.c ./str/ft_strjoin_path.c \
			./str/ft_strndup.c ./str/ft_split_whitespaces.c \
			./str/ft_strrep_free.c

SRCS	+=	./str/ft_strtab_free.c ./str/ft_strtab_put.c \
			./str/ft_strtab_len.c

SRCS	+=	./gnl/get_next_line.c

SRCS	+=	./atoi/ft_atoi.c ./atoi/ft_ltoa.c ./atoi/ft_lltoa.c \
			./atoi/ft_ulltoa.c ./atoi/ft_ftoa.c ./atoi/ft_itoa.c


OBJS	= $(SRCS:.c=.o)

HEAD	= ./libft.h ./gnl/get_next_line.h

INCLUDES= -I. -I./gnl/

CFLAGS	= -Wall -Werror -Wextra $(INCLUDES)

.PHONY: all clean fclean re

all: $(NAME)

%.o: %.c $(HEAD)
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJS) $(HEAD)
	@ar rcs $(NAME) $(OBJS)

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)
