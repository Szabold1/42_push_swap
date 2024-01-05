NAME = checker
CC = cc
RM = rm -f
SRCDIR = src
INCDIR = include
CFLAGS = -Wall -Wextra -Werror -I$(INCDIR)
LIBRARY = ../push_swap/libpush_swap.a

SRC = get_next_line_utils.c \
		get_next_line.c \
		main.c
OBJS = $(SRC:%.c=$(SRCDIR)/%.o)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS) $(LIBRARY)
	$(CC) $^ -o $(NAME)
	cp $(NAME) ../push_swap

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)
	$(RM) ../push_swap/$(NAME)

re: fclean all

.PHONY: all clean fclean re