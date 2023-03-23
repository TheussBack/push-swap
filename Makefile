#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrobin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/14 17:13:05 by hrobin          #+#    #+#              #
#    Updated: 2022/03/14 19:29:17 by hrobin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAMEBONUS = checker

CC = gcc

MAIN = ./srcs/main.c

SRCS = ./srcs/utils.c ./srcs/parse.c ./srcs/sort_smalls.c \
		./srcs/swap.c ./srcs/checks.c ./srcs/push.c \
		./srcs/rotate.c ./srcs/reverse_rotate.c ./srcs/sort.c \
		./srcs/sort_utils.c ./srcs/lis.c ./srcs/place.c


SRCSBONUS = ./bonus/checker.c \
			./bonus/cmp.c \
			./bonus/get_next_line_utils.c \
			./bonus/get_next_line.c

LIBFT_PATH = ./Libft/
LIBFT = ${LIBFT_PATH}libft.a

OBJS = ${SRCS:.c=.o}
OBJSMAIN = ${MAIN:.c=.o}
OBJSBONUS = ${SRCSBONUS:.c=.o}

INC = ./includes

FLAGS = -Wall -Wextra -Werror

.c.o:
	${CC} ${FLAGS} -I${INC} -c $< -o ${<:.c=.o}

${NAME}:    ${OBJS} ${OBJSMAIN} ${LIBFT}
	    ${CC} ${FLAGS} ${OBJS} ${OBJSMAIN} ${LIBFT} -o ${NAME}

${NAMEBONUS}:	${OBJS} ${OBJSBONUS} ${LIBFT}
		${CC} ${FLAGS} ${OBJS} ${OBJSBONUS} ${LIBFT} -o ${NAMEBONUS}

all:    ${NAME}

bonus: ${NAMEBONUS}

${LIBFT}:
	make -C ${LIBFT_PATH}

clean:
	rm -f ${OBJS} ${OBJSBONUS} ${OBJSMAIN}
	make -C ${LIBFT_PATH} clean

fclean: clean
	rm -f ${NAME} ${NAMEBONUS}
	make -C ${LIBFT_PATH} fclean

re: fclean all

.PHONY: all clean fclean re bonus
