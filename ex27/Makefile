GCC=gcc
FLAGS=-Wall -Wextra -Werror
NAME=ft_display_file
SRC=ft_display_file.c
OBJ=$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(GCC) $(FLAGS) -o $(NAME) $(OBJ)

%.o: %.c
	$(GCC) $(FLAGS) -c $<
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all