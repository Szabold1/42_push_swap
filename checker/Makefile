# Makefile for checker (push_swap bonus)

# Name of the executable
NAME = checker

# Source directories
SRC_DIR = src

# Other directories
PUSH_SWAP_DIR = ../push_swap

# Library name
LIBRARY = ./libpush_swap.a

# Headers
HEADERS_DIR = ./include
HEADERS = $(HEADERS_DIR)/checker.h

# Compiler and Flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(HEADERS_DIR)

# Remove command
RM = rm -f

# Source files
SRC = get_next_line_utils.c \
		get_next_line.c \
		main.c

# Object files
OBJ = $(SRC:%.c=$(SRC_DIR)/%.o)

# Compile individual source files
%.o : %.c $(HEADERS)
	@$(CC) $(CFLAGS) -c $< -o $@

# Phony Targets
all: $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(PUSH_SWAP_DIR)/$(NAME)
	@$(RM) $(LIBRARY)

re: fclean all

# Target Rules
$(NAME): $(OBJ) $(LIBRARY)
	@$(CC) $^ -o $(NAME)
	@cp $(NAME) $(PUSH_SWAP_DIR)

.PHONY: all clean fclean re