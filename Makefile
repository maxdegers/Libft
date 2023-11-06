# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbrousse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 15:47:36 by mbrousse          #+#    #+#              #
#    Updated: 2023/11/06 16:23:09 by mbrousse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES =

OBJECTS = ${SOURCES:.c=.o}

HEADER = libft.h

NAME = libft.a

LANGUAGE = cc

FLAGS =  -Wall -Wextra -Werror

.c.o:
	${LANGUAGE} ${FLAGS} -c $< -o ${<:.c=.o} ${HEADER}
${NAME}: ${OBJECTS}
	ar -rc ${NAME} ${OBJECTS}
all: ${NAME}

clean:
	rm -f ${OBJECTS}

fclean: clean
	rm -f ${NAME}

re: fclean all
