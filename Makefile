# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmande <anmande@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 10:36:29 by anmande           #+#    #+#              #
#    Updated: 2022/05/10 11:46:15 by anmande          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = clang

CFLAGS = -Wall -Wextra -Werror 


SRC =	ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \
		ft_memset.c \
		ft_bzero.c \
		ft_memmove.c \
		ft_memcpy.c \

OBJ = ${SRC:.c=.o}

all: ${NAME} test

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ}
	ar rcs $(NAME) $(OBJ)

clean: 
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f ${NAME}

test: all
	$(CC) $(CFLAGS) -c main.c
	$(CC) $(CFLAGS) main.o -L . -lft -o exec

re: fclean test

tclean:
	rm exec

.PHONY: all clean fclean re