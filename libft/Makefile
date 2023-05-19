# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jode-jes <jode-jes@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/18 11:41:05 by jode-jes          #+#    #+#              #
#    Updated: 2023/05/18 12:33:07 by jode-jes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile

# ar - create, modify and extract from archives

# rcs 
# c -Create the archive. The specified archive is always created if it did not exist, when you request an update. But a warning is issued unless you specify in advance that you expect to create it, by using this modifier.
# r -Insert the files member... into archive (with replacement). This operation differs from q in that any previously existing members are deleted if their names match those being added.
# s -Write an object-file index into the archive, or update an existing one, even if no other change is made to the archive. You may use this modifier flag either with any operation, or alone. Running "ar s" on an archive is equivalent to running ranlib on it.

# Variables (expl -> NAME (variable) = libft.a (variable value))

NAME = libft.a

PART1 = ft_tolower.c ft_toupper.c ft_isprint.c ft_isascii.c ft_isalnum.c \
		ft_isdigit.c ft_isalpha.c ft_atoi.c ft_strlen.c ft_strlcat.c \
		ft_strncmp.c ft_strdup.c ft_calloc.c ft_memcpy.c ft_strchr.c \
		ft_strrchr.c ft_strnstr.c ft_bzero.c ft_memchr.c ft_memcmp.c \
		ft_memset.c ft_memmove.c ft_strlcpy.c
		
PART2 = ft_itoa.c ft_strjoin.c ft_split.c ft_striteri.c ft_strmapi.c \
		ft_substr.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstsize.c ft_lstlast.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

SRC = ${PART1} ${PART2}
SRC_BONUS = ${BONUS}

OBJS = ${SRC:.c=.o} # it takes everything that its a source file (.c) and creates object files #transforms every c. file into an o. file(object file)
OBJS_BONUS = ${SRC_BONUS:.c=.o} #makes the same thing of the line above to the bonus.
HEADER = libft.h #creates the name of the header
INCLUDE = -I . #include the headers (the .h files)
CC = cc #run the compiler
RM = rm -f #deletes. forces to delete.
CFLAGS = -Wall -Wextra -Werror #flags of the compiler to check for extra errors/rules when its running.

# pattern rules that specifies how to create an object file using a source file
%.o:%.c #command to create each object file from the src file. -o $@ (gives the name of the source file) to the $^(object file). This way object file has the same name of the src file. echo is just used to print something...its like printf but in a Makefile.
	${CC} ${CFLAGS} ${INCLUDE} -c -o $@ $^ 
	@echo "\n$@ created" 
	
$(NAME): ${OBJS} ${HEADER} # 
	@ar rcs ${NAME} ${OBJS} ${HEADER}
	@echo "\n${NAME} created" 

# rules/commands to run in the terminal. expl -> all (its the rule) = ${NAME} ... the all depends of the name. When we call it, it will check the rule that was done to the $(NAME). If the src file or header file were changed, it will verify those changes && update the file src.
all: ${NAME}

bonus: ${OBJS} ${OBJS_BONUS} ${HEADER}
	@ar rcs ${NAME} ${OBJS} ${OBJS_BONUS} ${HEADER}
	@echo "\n$@ created"

clean:
	@${RM} ${OBJS} ${OBJS_BONUS}
	@echo "\nObjects deleted"

fclean: clean
	${RM} ${NAME} 
	@echo "\n${NAME} deleted"

re: fclean all

.PHONY: all clean fclean re bonus

