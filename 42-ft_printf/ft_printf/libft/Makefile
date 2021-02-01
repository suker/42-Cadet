# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/26 10:24:14 by jubonill          #+#    #+#              #
#    Updated: 2021/01/11 21:58:20 by jubonill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

NAME = libft.a

SRCS += ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c
SRCS += ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c
SRCS += ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c
SRCS += ft_toupper.c ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c
SRCS += ft_itoa.c ft_strmapi.c ft_putstr_fd.c ft_putnbr_fd.c ft_putchar_fd.c
SRCS += ft_memchr.c ft_memcmp.c ft_strnstr.c ft_strncmp.c ft_isprint.c
SRCS += ft_strtrim.c ft_split.c ft_putendl_fd.c ft_tolower.c

SRCS += ft_striter.c ft_strncpy.c ft_strcat.c ft_striteri.c ft_strnequ.c
SRCS += ft_memalloc.c ft_strclr.c ft_strnlen.c ft_strcpy.c ft_strmap.c
SRCS += ft_putnbr.c ft_strdel.c ft_strrev.c ft_putendl.c ft_strcmp.c
SRCS += ft_strncat.c ft_strstr.c ft_memdel.c ft_putstr.c ft_strequ.c
SRCS += ft_strnew.c ft_putchar.c
OBJS = ${SRCS:.c=.o}

CC = gcc

RM = rm -f

RUN = ranlib

LIB = ar crs

CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

$(NAME): ${OBJS}
		${LIB} ${NAME} ${OBJS}
		${RUN} ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: clean fclean all re
