NAME = libft.a
EXECUTABLE = app
SRC = ${wildcard ft_*.c}
OBJS = ${SRC:.c=.o}
HEADER = libft.h
INCLUDE = -I .
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all:    ${NAME}
$(NAME): ${OBJS} ${HEADER}
	ar rcs ${NAME} ${OBJS} ${HEADER}
%.o:%.c
	${CC} ${CFLAGS} ${INCLUDE} -c -o $@ $^
clean:
	${RM} ${OBJS}
fclean: clean
	${RM} ${NAME}
$(EXECUTABLE)clean: fclean
	${RM} ${EXECUTABLE}
re: fclean all
$(EXECUTABLE): ${NAME} main.c
	${CC} ${CFLAGS} ${INCLUDE} main.c ${NAME} -o ${EXECUTABLE}
	./${EXECUTABLE}
.PHONY: all clean fclean re