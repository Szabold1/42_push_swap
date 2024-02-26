# Makefile for push_swap

# Name of the executable
NAME = push_swap

# Library name
LIBRARY = libpush_swap.a

# Source directories
SRC_DIR = ./src

# Bonus directories
BONUS_DIR = ../checker

# Headers
HEADERS_DIR = ./include
HEADERS = $(HEADERS_DIR)/push_swap.h
HEADERS_BONUS_DIR = $(BONUS_DIR)/include
HEADERS_BONUS = $(HEADERS_BONUS_DIR)/checker.h

# Compiler and Flags
CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(HEADERS_DIR) -I$(HEADERS_BONUS_DIR)

# Archiver
AR = ar rcs

# Remove command
RM = rm -rf

# Source files
SRC = operations/push.c \
		operations/reverse_rotate.c \
		operations/rotate.c \
		operations/swap.c \
		check_dup.c \
		free_stack.c \
		free_str_arr.c \
		ft_split.c \
		handle_error.c \
		handle_input.c \
		main.c \
		move_b_to_a.c \
		move_nodes.c \
		set_node_indexes.c \
		sort_stack.c \
		stack_add_back.c \
		stack_get_last_node.c \
		stack_get_max_node.c \
		stack_get_min_node.c \
		stack_is_sorted.c \
		stack_new_node.c \
		stack_size.c

# Object files
OBJ = $(SRC:%.c=$(SRC_DIR)/%.o)

# Compile individual source files
%.o : %.c $(HEADERS) $(HEADERS_BONUS)
	@$(CC) $(CFLAGS) -c $< -o $@ 

# Phony Targets
all: $(NAME)

clean:
	@$(RM) $(OBJ)
	@cd $(BONUS_DIR) && $(MAKE) --quiet clean
	@echo "✅ clean done"

fclean: clean
	@$(RM) $(NAME)
	@$(RM) $(LIBRARY)
	@cd $(BONUS_DIR) && $(MAKE) --quiet fclean
	@echo "✅ fclean done"

re: fclean all

bonus: $(LIBRARY)
	@cd $(BONUS_DIR) && $(MAKE) --quiet
	@echo "✅ bonus (checker) created"

# Target Rules
$(NAME): $(OBJ)
	@$(CC) $(OBJ) -o $(NAME)
	@echo "✅ $(NAME) created"

$(LIBRARY): $(OBJ)
	@$(AR) $(LIBRARY) $(OBJ)
	@cp $(LIBRARY) ../checker

.PHONY: all clean fclean re bonus