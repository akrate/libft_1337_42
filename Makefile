# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aoussama <aoussama@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/01 18:29:38 by aoussama          #+#    #+#              #
#    Updated: 2024/11/09 13:14:34 by aoussama         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_atoi.c ft_itoa.c ft_putnbr_fd.c ft_strlcpy.c ft_tolower.c \
ft_bzero.c ft_memchr.c ft_putstr_fd.c  ft_strlen.c ft_toupper.c \
ft_calloc.c ft_memcmp.c ft_split.c ft_strmapi.c \
ft_isalnum.c ft_memcpy.c ft_strchr.c ft_strncmp.c \
ft_isalpha.c ft_memmove.c ft_strdup.c ft_strnstr.c \
ft_isascii.c ft_memset.c ft_striteri.c ft_strrchr.c \
ft_isdigit.c ft_putchar_fd.c ft_strjoin.c ft_strtrim.c \
ft_isprint.c ft_putendl_fd.c ft_strlcat.c ft_substr.c

BONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c \
ft_lstdelone_bonus.c ft_lstlast_bonus.c \
ft_lstnew_bonus.c ft_lstsize_bonus.c

LIB = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

OBJS = ${SRC:.c=.o}

OBJSALL = ${BONUS:.c=.o}

all: ${LIB}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

${LIB}: ${OBJS}
	ar rc ${LIB} ${OBJS}

bonus: ${OBJSALL}
	ar rc ${LIB} ${OBJSALL}

clean:
	rm -f ${OBJS} ${OBJSALL}

fclean: clean
	rm -f ${LIB}

re: fclean all

.PHONY: all clean fclean re bonus