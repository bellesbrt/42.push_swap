# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: inicole- <inicole-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 23:57:40 by inicole-          #+#    #+#              #
#    Updated: 2023/02/15 15:09:04 by inicole-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	push_swap

HEADERS_DIR 	=	./includes/
SOURCES_DIR		=	./src/

HEADERS_LIST	=	push_swap.h
SOURCES_LIST	=	init.c utils.c s_swap.c \
					push_swap.c swap.c push.c rotate.c \
					reverse_rotate.c sort.c sort_plus.c \
					error.c

HEADERS			=	${addprefix ${HEADERS_DIR}, ${HEADERS_LIST}}
SOURCES			=	${addprefix ${SOURCES_DIR}, ${SOURCES_LIST}}
INCLUDES		=	-I ${HEADERS_DIR} -I ${LIBFT_HEADERS}

OBJECTS_DIR		=	./objs/
OBJECTS_LIST	=	${patsubst %.c, %.o, ${SOURCES_LIST}}
OBJS			=	$(SOURCES_LIST:.c=.o)
OBJECTS			=	${addprefix ${OBJECTS_DIR}, ${OBJECTS_LIST}}

LIBFT			=	${LIBFT_DIR}libft.a
LIBFT_DIR		=	./libft/
LIBFT_HEADERS	=	${LIBFT_DIR}includes/

CC				=	cc 
CFLAGS			=	-Wall -Werror -Wextra -g3

all: ${NAME}

libft: ${LIBFT}

pyviz:
	python3 pyviz.py `ruby -e "puts (1..400).to_a.shuffle.join(' ')"`

${NAME}:		${LIBFT} ${OBJECTS_DIR} ${OBJECTS}
	${CC} ${CFLAGS} ${OBJECTS} ${LIBFT} ${INCLUDES} -o ${NAME}

${OBJECTS_DIR}:
	mkdir -p ${OBJECTS_DIR}

${OBJECTS_DIR}%.o : ${SOURCES_DIR}%.c ${HEADERS}
	${CC} ${CFLAGS} -c ${INCLUDES} $< -o $@

${LIBFT}:
	clear && make -sC ${LIBFT_DIR}

clean:
	clear
	@make -sC ${LIBFT_DIR} clean
	@rm -rf ${OBJECTS_DIR}

fclean: clean
	@rm -rf ${LIBFT}
	@rm -rf ${NAME}

re:	fclean all

.PHONY:		all, clean, fclean, re