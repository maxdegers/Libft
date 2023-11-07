SOURCES = 	isalpha.c\
			isdigit.c\
			isalnum.c\
			isascii.c\
			isprint.c\
			strlen.c\
			memset.c\
			
OBJECTS = ${SOURCES:.c=.o}
HEADER_FILE = libft.h
NAME = libft.a
CC = cc
FLAGS =  -Wall -Wextra -Werror

%.o:%.c  ${HEADER_FILE}
	${CC} ${FLAGS} -c $< -o $@ -I ${HEADER_FILE}

${NAME}: ${OBJECTS}
	ar -rc ${NAME} ${OBJECTS}

all: ${NAME}

clean:
	rm -f ${OBJECTS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
