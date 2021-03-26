# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jubonill <jubonill@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/28 16:26:08 by jubonill          #+#    #+#              #
#    Updated: 2021/02/15 16:16:42 by jubonill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

SRCS_PATH	= srcs/

LIBFT_PATH	= libft/

LIBFT_LIB	= libft.a

HEADERS_FOLDER	= includes/

SRCS_FILES	= $(addprefix ${SRCS_PATH},\
			conversions.c \
			extra.c \
			fields.c \
			ft_printf.c \
			bases.c \
			inisialization.c \
			outputs.c \
			parsing.c \
			binaries.c \
			t_print.c )

SRCS_OBJS 	= ${SRCS_FILES:.c=.o}

CC 		= gcc

CFLAGS 		= -Wall -Wextra -Werror

RM 		= rm -f

AR 		= ar crs

LIBFT_OBJS	= ${LIBFT_PATH}*.o

LIBFTMAKE	= $(MAKE) -C ${LIBFT_PATH}

all:		${NAME}

${NAME}: 	${SRCS_OBJS} pmake
		${AR} ${NAME} ${SRCS_OBJS} ${LIBFT_OBJS}

pmake:
		${LIBFTMAKE}

clean:
		make -C ${LIBFT_PATH} clean
		${RM} ${SRCS_OBJS}

fclean:		clean
		${RM} ${NAME} ${LIBFT_PATH}${LIBFT_LIB}

re: 		fclean all

.PHONY:		all clean fclean re
