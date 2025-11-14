SRCS =	ft_print_address.c ft_print_char.c ft_print_decimal.c \
		ft_print_format.c ft_print_hex.c ft_print_str.c ft_print_unsigned.c ft_printf.c

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