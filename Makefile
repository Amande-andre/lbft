# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmande <anmande@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 10:36:29 by anmande           #+#    #+#              #
#    Updated: 2022/05/07 13:24:01 by anmande          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang

CFLAGS = -Wall -Wextra -Werror 

SRC =	main.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_strlen.c \

OBJ = ${SRC:.c=.o}

NAME = libft

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME} 

all: ${NAME} 

clean: 
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re