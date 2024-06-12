CC = gcc
CFLAGS = -Wextra -Wall -Werror
NAME = libft.a
DIR = /Users/lcroxatt/42/Libft/libft
SRCS =	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_substr.c	\
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c \
		ft_itoa.c \
		ft_strmapi.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_lstnew_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstsize_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstmap_bonus.c \


HEADER = libft.h

# Creating object files (.o files)
OBJ = $(SRCS:%.c=%.o)

# Compile each .c file into a .o file
%.o: %.c
	@gcc -Wextra -Wall -Werror -c $< -o $@

# Same but for bonus files
OBJBONUS = $(BONUS:%.c=%.o) $(OBJ)

# Launching variable NAME
all: ${NAME}

# Creating an archive composed of the .o files
${NAME}: ${OBJ}
	@echo "Archiving Libft"
	@ar rcs ${NAME} ${OBJ}

#Removes every .o files

clean :	
	@rm -f ${OBJ} ${OBJBONUS}

#Removes every .o file and the .a file

fclean : clean
	@rm -f ${NAME}

#Removes every .o file, the .a file and recreates everything (useful if an update is needed)

re : fclean all

#Adds the bonus files as well to the archvive

bonus :	${OBJBONUS}
		ar rcs ${NAME} ${OBJBONUS}

#Necessary to tell to the Makefile that these should not be interpreted as files, but as rules. It allows these rules to be executed no matter what.

.PHONY: all clean fclean re


