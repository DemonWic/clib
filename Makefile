NAME = libft.a
SRC = ft_*.c
OBJ = ft_*.o
FLAGS = -Wall -Wextra -Werror 

all:
	gcc $(FLAGS) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all clean
