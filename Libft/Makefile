# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrobin <hrobin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/03 16:23:10 by hrobin          #+#    #+#              #
#    Updated: 2022/04/29 21:25:13 by hrobin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

SRCS = ft_atoi.c \
       ft_isdigit.c \
       ft_split.c ft_strchr.c ft_strdup.c \
       ft_strjoin.c \
       ft_strlcpy.c ft_strlen.c \
       ft_strcmp.c ft_abs.c

OBJS = ${SRCS:.c=.o}

INC = ../includes

FLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${FLAGS} -I${INC} -c $< -o ${<:.c=.o}

all:	 ${NAME}

${NAME}:    ${OBJS}
	ar rcs ${NAME} ${OBJS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus
