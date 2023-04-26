NAME = libft.a
#retirou EXECUTABLE = app porque?
SRC = ${filter-out ${SRC_BONUS}, ${wildcard ft_*.c}}
SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
		ft_lstiter.c ft_lstsize.c ft_lstlast.c ft_lstmap.c
OBJS = ${SRC:.c=.o}
OBJS_BONUS = ${SRC_BONUS:.c=.o}
HEADER = libft.h
INCLUDE = -I .
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}
$(NAME): ${OBJS} ${HEADER}
	ar rcs ${NAME} ${OBJS} ${HEADER}
	@echo "\n${NAME} created" 
bonus: ${OBJS} ${OBJS_BONUS} ${HEADER}
	@ar rcs ${NAME} ${OBJS} ${OBJS_BONUS} ${HEADER}
	@echo "\n$@ created"
#o 	que as 3 linhas de cima fazem?
%.o:%.c
	${CC} ${CFLAGS} ${INCLUDE} -c -o $@ $^
	@echo "\n$@ created"
#o 	que a linha de cima faz?
clean:
	@${RM} ${OBJS} ${OBJS_BONUS}
	@echo "\nObjects deleted"
#o 	que as 2 linhas de cima fazem? na primeira acrescentamos o objec bonus.
fclean: clean
	${RM} ${NAME} 
	@echo "\n${NAME} deleted"
#$(EXECUTABLE)clean: fclean
#	${RM} ${EXECUTABLE}
#chatgpt suggests to remove the line above and include in the fclean, like this: fclean: clean
#${RM} ${NAME} ${EXECUTABLE}


re: fclean all
#retirou o debaixo do re- porque? 
#$(EXECUTABLE): ${NAME} main.c
#	${CC} ${CFLAGS} ${INCLUDE} main.c ${NAME} -o ${EXECUTABLE}
#	./${EXECUTABLE}
.PHONY: all clean fclean re

