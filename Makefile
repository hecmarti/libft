# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -Werror

# Name of the library
NAME = libft.a

# Source files directory
SRCS_DIR = .

# Source files
SRCS = $(wildcard $(SRCS_DIR)/*.c)

# Object files
OBJS = $(SRCS:.c=.o)

# Make rule to build the library
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Make rule to build the object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Make rule to clean object files
clean:
	rm -f $(OBJS)

# Make rule to clean object files and the library
fclean: clean
	rm -f $(NAME)

# Make rule to recompile everything
re: fclean $(NAME)

.PHONY: all clean fclean re
