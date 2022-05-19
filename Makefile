# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmande <anmande@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/03 10:36:29 by anmande           #+#    #+#              #
#    Updated: 2022/05/19 10:40:38 by anmande          ###   ########.fr        #
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
		ft_toupper.c \
		ft_tolower.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strncmp.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strnstr.c \
		ft_atoi.c \
		ft_calloc.c \
		ft_strdup.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
#		ft_strlcpy.c \

		
OBJ = ${SRC:.c=.o}

all: $(NAME) #test

$(NAME): ${OBJ}
	ar -rcs ${NAME} ${OBJ}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean: 
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

#test: all
#	$(CC) $(CFLAGS) -c main.c
#	$(CC) $(CFLAGS) main.o -L . -lft -o exec

re: fclean all #test

tclean:
	rm exec

.PHONY: all clean fclean re