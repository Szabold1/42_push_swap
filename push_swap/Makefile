NAME = push_swap
CC = cc
RM = rm -f
SRCDIR = src
INCDIR = include
CFLAGS = -Wall -Wextra -Werror -I$(INCDIR)
LIBRARY = libpush_swap.a

SRCS = $(SRCDIR)/operations/push.c \
			$(SRCDIR)/operations/reverse_rotate.c \
			$(SRCDIR)/operations/rotate.c \
			$(SRCDIR)/operations/swap.c \
			$(SRCDIR)/check_dup.c \
			$(SRCDIR)/free_stack.c \
			$(SRCDIR)/free_str_arr.c \
			$(SRCDIR)/ft_split.c \
			$(SRCDIR)/handle_error.c \
			$(SRCDIR)/handle_input.c \
			$(SRCDIR)/main.c \
			$(SRCDIR)/move_b_to_a.c \
			$(SRCDIR)/move_nodes.c \
			$(SRCDIR)/set_node_indexes.c \
			$(SRCDIR)/sort_stack.c \
			$(SRCDIR)/stack_add_back.c \
			$(SRCDIR)/stack_get_last_node.c \
			$(SRCDIR)/stack_get_max_node.c \
			$(SRCDIR)/stack_get_min_node.c \
			$(SRCDIR)/stack_is_sorted.c \
			$(SRCDIR)/stack_new_node.c \
			$(SRCDIR)/stack_size.c

OBJS = $(SRCS:.c=.o)

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