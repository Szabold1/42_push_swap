NAME = push_swap
CC = cc
RM = rm -f
SRCDIR = src
INCDIR = include
CFLAGS = -Wall -Wextra -Werror -I$(INCDIR)
LIBRARY = libpush_swap.a

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

OBJS = $(SRC:%.c=$(SRCDIR)/%.o)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

all: $(NAME)

$(LIBRARY): $(OBJS)
	ar rcs $(LIBRARY) $(OBJS)

bonus: $(LIBRARY)
	cd ../checker && make

clean:
	$(RM) $(OBJS)
	cd ../checker && make clean

fclean: clean
	$(RM) $(NAME)
	$(RM) $(LIBRARY)
	cd ../checker && make fclean

re: fclean all

.PHONY: all clean fclean re bonus