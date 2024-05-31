CC = gcc
CFLAGS = -Wextra -Wall -Werror -Iincludes
NAME = push_swap
SRCS =	$(wildcard src/*.c utils/*.c)
CHECK_SRCS = $(wildcard utils/*.c) src/in

# Creating object files (.o files)
OBJS = $(SRCS:.c=.o)

# Compile each .c file into a .o file
%.o: %.c
	@${CC} ${CFLAGS} -c $< -o $@

# Launching variable NAME
all: ${NAME}

# Creating an archive composed of the .o files
${NAME}: ${OBJS}
	@make -C ./libft
	@${CC} ${CFLAGS} ${OBJS} ./libft/libft.a -o ${NAME}
	@make clean

#Removes every .o files

clean :	
		@make -C ./libft fclean
		@rm -rf ${OBJS}

#Removes every .o file and the .a file

fclean : clean
		@rm -rf ${NAME}

#Removes every .o file, the .a file and recreates everything (useful if an update is needed)

re : fclean all

#Necessary to tell to the Makefile that these should not be interpreted as files, but as rules. It allows these rules to be executed no matter what.

.PHONY: all clean fclean re


