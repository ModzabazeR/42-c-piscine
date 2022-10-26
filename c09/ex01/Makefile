# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: phchirap <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 20:16:48 by phchirap          #+#    #+#              #
#    Updated: 2022/10/24 21:07:05 by phchirap         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
RM = rm -f
OBJS = ${SRCS:.c=.o}

.c.o:
	${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

all:	${NAME}

.PHONY: all clean fclean re .c.o
