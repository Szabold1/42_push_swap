NAME = checker
CC = cc
RM = rm -f
SRCDIR = src
INCDIR = include
CFLAGS = -Wall -Wextra -Werror -I$(INCDIR)

SRCS = $(SRCDIR)/main.c

OBJS = $(SRCS:.c=.o)

.c.o:
	$(CC) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re