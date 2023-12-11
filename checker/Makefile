NAME = checker
CC = cc
RM = rm -f
SRCDIR = src
INCDIR = include
CFLAGS = -Wall -Wextra -Werror -I$(INCDIR)
LIBRARY = ../push_swap/libpush_swap.a

SRCS = $(SRCDIR)/get_next_line_utils.c \
		$(SRCDIR)/get_next_line.c \
		$(SRCDIR)/main.c \

OBJS = $(SRCS:.c=.o)

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