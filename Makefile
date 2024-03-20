# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anrkhach <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/22 17:40:10 by anrkhach          #+#    #+#              #
#    Updated: 2024/02/12 18:16:12 by rafpetro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS := ft_strlen.c \
        ft_memmove.c \
        ft_memcpy.c \
        ft_strlcpy.c \
        ft_strlcat.c \
        ft_isalpha.c \
        ft_isdigit.c \
        ft_isalnum.c \
        ft_isascii.c \
        ft_isprint.c \
        ft_memset.c \
        ft_bzero.c \
        ft_toupper.c \
        ft_tolower.c \
        ft_strchr.c \
        ft_strrchr.c \
        ft_strncmp.c \
        ft_memchr.c \
        ft_memcmp.c \
        ft_strnstr.c \
        ft_atoi.c \
        ft_calloc.c \
        ft_strdup.c \
        ft_substr.c \
        ft_strjoin.c \
        ft_strtrim.c \
        ft_split.c \
        ft_itoa.c \
        ft_strmapi.c \
        ft_striteri.c \
        ft_putchar_fd.c \
        ft_putstr_fd.c \
        ft_putendl_fd.c \
        ft_putnbr_fd.c

SRCB := ft_lstnew.c \
        ft_lstsize.c \
        ft_lstlast.c \
        ft_lstadd_front.c \
        ft_lstadd_back.c \
        ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

NAME = libft.a
HEADER = libft.h

OBJS = ${SRCS:.c=.o}
BONUS_OBJS = ${SRCB:.c=.o}

LIBC = ar rcs
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
INCLUDE = -I

all: ${NAME}

${NAME}: ${OBJS} ${HEADER}
	${LIBC} ${NAME} ${OBJS}

%.o: %.c ${HEADER}
	${CC} ${CFLAGS} ${INCLUDE} ${HEADER} -c $< -o $@

clean:
	${RM} ${OBJS} ${BONUS_OBJS}

fclean: clean
	${RM} ${NAME}

bonus: ${HEADER} ${OBJS} ${BONUS_OBJS}
	${LIBC} ${NAME} ${OBJS} ${BONUS_OBJS}

re: fclean all

.PHONY: all clean fclean bonus re
