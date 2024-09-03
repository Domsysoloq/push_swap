# Variables
CC = gcc
CFLAGS = -Wextra -Wall -Werror -Iincludes
NAME = push_swap
SRCS =	$(wildcard src/*.c utils/*.c)
CFLAGSLLDB = -g -Wextra -Wall -Werror -Iincludes
LEAKCHECK_FLAGS = -g

# Creating object files (.o files)
OBJS = $(SRCS:.c=.o)

# Compile each .c file into a .o file
%.o: %.c
	@${CC} ${CFLAGS} -c $< -o $@

# Default target to build the project
all: ${NAME}

# Link the object files into the final executable
${NAME}: ${OBJS}
	@make -C ./libft
	@echo "Compiling ${NAME}"
	@${CC} ${CFLAGS} ${OBJS} ./libft/libft.a -o ${NAME}

# For testing with LLDB (debugging)
lldb: ${OBJS}
	@make -C ./libft
	@${CC} ${CFLAGSLLDB} ${OBJS} ./libft/libft.a -o ${NAME}
	@make clean

# Compile with debug flags and prepare for Valgrind leak check
leakcheck: CFLAGS += ${LEAKCHECK_FLAGS}
leakcheck: re

# Clean object files
clean :	
	@make -C ./libft fclean
	@rm -rf ${OBJS}

# Clean object files and the executable
fclean : clean
	@rm -rf ${NAME}

# Clean and rebuild everything
re : fclean all

# Ensure these targets are not treated as files
.PHONY: all clean fclean re lldb leakcheck



