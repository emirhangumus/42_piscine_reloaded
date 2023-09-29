NAME=libft.a
SRCS=$(wildcard ./srcs/*.c)
OBJS=$(SRCS:.c=.o)
INCLUDES=./includes
CC=gcc
CFLAGS=-Wall -Wextra -Werror
RM=rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I$(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all