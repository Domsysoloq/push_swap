CC = gcc
CFLAGS = -Wextra -Wall -Werror -Iincludes
NAME = push_swap
SRCS =	$(wildcard src/*.c utils/*.c)
CFLAGSLLDB = -g -Wextra -Wall -Werror -Iincludes
LEAKCHECK_FLAGS = -g

OBJS = $(SRCS:.c=.o)

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

all: ${NAME}

${NAME}: ${OBJS}
	@make -C ./libft
	@echo "Compiling ${NAME}"
	${CC} ${CFLAGS} ${OBJS} ./libft/libft.a -o ${NAME}

lldb: ${OBJS}
	@make -C ./libft
	@${CC} ${CFLAGSLLDB} ${OBJS} ./libft/libft.a -o ${NAME}
	@make clean

leakcheck: CFLAGS += ${LEAKCHECK_FLAGS}
leakcheck: re

clean :	
	@make -C ./libft fclean
	@rm -rf ${OBJS}

fclean : clean
	@rm -rf ${NAME}

re : fclean all

.PHONY: all clean fclean re lldb leakcheck



