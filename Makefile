SRCS = 	address_printer.c char_printer.c format_checker.c /
		ft_printf.c lower_hexa_printer.c number_printer.c /
		string_printer.c unsigned_printer.c upper_hexa_printer.c

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