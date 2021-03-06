# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmartel <jmartel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/06 12:53:13 by jmartel           #+#    #+#              #
#    Updated: 2019/04/15 10:52:59 by jmartel          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
EXEC	= exec

SRCS	=	./lst/ft_lstnew.c ./lst/ft_lstdelone.c \
			./lst/ft_lstdel.c ./lst/ft_lstadd.c \
			./lst/ft_lstiter.c ./lst/ft_lstmap.c \
			./lst/ft_lstlen.c ./lst/ft_lstadd_last.c \
			./lst/ft_lstput_fd.c

SRCS	+=	./math/ft_max.c ./math/ft_min.c ./math/ft_abs.c \
			./math/ft_pow.c ./math/ft_roundf.c \
			./math/ft_roundl.c ./math/ft_longlen.c

SRCS	+=	./mem/ft_memset.c ./mem/ft_bzero.c \
			./mem/ft_memcpy.c ./mem/ft_memccpy.c \
			./mem/ft_memmove.c ./mem/ft_memchr.c \
			./mem/ft_memcmp.c ./mem/ft_memalloc.c \
			./mem/ft_memdel.c

SRCS	+=	./put/ft_putchar.c ./put/ft_putstr.c \
			./put/ft_putendl.c ./put/ft_putnbr.c \
			./put/ft_putchar_fd.c ./put/ft_putstr_fd.c \
			./put/ft_putendl_fd.c ./put/ft_putnbr_fd.c \
			./put/ft_putcharn.c ./put/ft_putstrn.c \
			./put/ft_putnbrn.c

SRCS	+=	./str/ft_strlen.c ./str/ft_strdup.c \
			./str/ft_strcpy.c ./str/ft_strncpy.c \
			./str/ft_strcat.c ./str/ft_strncat.c \
			./str/ft_strlcat.c ./str/ft_strchr.c \
			./str/ft_strrchr.c ./str/ft_strstr.c \
			./str/ft_strnstr.c ./str/ft_strcmp.c \
			./str/ft_strncmp.c ./str/ft_isalpha.c \
			./str/ft_isdigit.c ./str/ft_isalnum.c \
			./str/ft_isprint.c ./str/ft_isascii.c \
			./str/ft_iswhite.c ./str/ft_tolower.c \
			./str/ft_isalpha_only.c ./str/ft_isdigit_only.c \
			./str/ft_isalnum_only.c ./str/ft_isascii_only.c \
			./str/ft_isprint_only.c ./str/ft_iswhite_only.c \
			./str/ft_toupper.c ./str/ft_strnew.c \
			./str/ft_strdel.c ./str/ft_strclr.c \
			./str/ft_striter.c ./str/ft_striteri.c \
			./str/ft_strmap.c ./str/ft_strmapi.c \
			./str/ft_strequ.c ./str/ft_strnequ.c \
			./str/ft_strsub.c ./str/ft_strjoin.c \
			./str/ft_strtrim.c ./str/ft_strsplit.c \
			./str/ft_strnlen.c ./str/ft_strrev.c \
			./str/ft_strstr_count.c ./str/ft_strtolower.c \
			./str/ft_strjoin_free.c ./str/ft_strinsert_free.c \
			./str/ft_strjoin_path.c ./str/ft_strndup.c \
			./str/ft_split_whitespaces.c ./str/ft_strrep_free.c \
			./str/ft_strpbrk.c ./str/ft_strdelchar.c

SRCS	+=	./str/ft_strtab_free.c ./str/ft_strtab_put.c \
			./str/ft_strtab_len.c ./str/ft_strtab_new_line.c

SRCS	+=	./gnl/get_next_line.c

SRCS	+=	./atoi/ft_atoi.c ./atoi/ft_ltoa.c \
			./atoi/ft_lltoa.c ./atoi/ft_ulltoa.c \
			./atoi/ft_ftoa.c ./atoi/ft_itoa.c ./atoi/ft_atol.c

SRCS	+=	./ft_printf/ft_printf.c ./ft_printf/ft_dprintf.c \
			./ft_printf/ft_asprintf.c ./ft_printf/ft_printf_split.c \
			./ft_printf/ft_printf_conv.c ./ft_printf/ft_printf_put.c \
			./ft_printf/ft_printf_conv_is.c ./ft_printf/ft_printf_fill.c \
			./ft_printf/ft_printf_fill2.c ./ft_printf/ft_printf_cast.c \
			./ft_printf/ft_printf_flag.c ./ft_printf/ft_printf_flag_prec.c	\
			./ft_printf/ft_printf_flag_prec2.c \
			./ft_printf/ft_printf_flag_size.c \
			./ft_printf/ft_printf_flag_size2.c \
			./ft_printf/ft_printf_flag_hash.c

SRCS	+=	./dystr/ft_dystr_new.c ./dystr/ft_dystr_free.c \
			./dystr/ft_dystr_realloc.c ././dystr/ft_dystr_check.c

OBJS			= $(SRCS:%.c=%.o)

HEADERS		= ./ft_printf/ft_printf.h ./libft.h

INCLUDES	= -I. -I./ft_printf/

CC			= gcc
CFLAGS		= -Wall -Werror -Wextra $(INCLUDES)

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rcs $(NAME) $(OBJS) && echo "\033[32mSuccessfully compiled $(NAME) \033[0m"

$(EXEC): $(NAME) main.c
	@gcc $(INCLUDE) $(CFLAGS) -o $(EXEC) main.c $(NAME) && echo "\033[32mSuccessfully compiled $(EXEC) \033[0m"

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS) && echo "\033[32mSuccessfully cleaned $(NAME) objects files \033[0m"
	@rm -f main.o

fclean: clean
	@rm -f $(NAME) && echo "\033[32mSuccessfully cleaned $(NAME) \033[0m"
	@rm -f $(EXEC)


re: fclean all
