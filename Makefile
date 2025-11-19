# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: brouane <brouane@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/14 21:21:40 by brouane           #+#    #+#              #
#    Updated: 2025/11/17 20:25:12 by brouane          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 	address_printer.c char_printer.c format_checker.c \
		ft_printf.c long_hexa_printer.c lower_hexa_printer.c \
		number_printer.c string_printer.c unsigned_printer.c upper_hexa_printer.c

OBJS = ${SRCS:.c=.o}
NAME = libftprintf.a
ARCH = ar rcs
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS}
	${ARCH} ${NAME} ${OBJS}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY : all clean fclean re