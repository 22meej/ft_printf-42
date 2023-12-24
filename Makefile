SRC = ft_printf.c ft_string.c ft_numbers.c ft_memory.c

OBJ = $(SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

all :	$(NAME)

$(NAME) :	$(OBJ)
	ar rc $(NAME) $(OBJ)

%.o :	%.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ)

fclean :	clean
	rm -f $(NAME)

re :	fclean all

.PHONY :	clean all fclean re