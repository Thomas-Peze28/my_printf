##
## EPITECH PROJECT, 2024
## makefile pong seb
## File description:
## makfile
##

SRC	=	main.c	\
		my_printf.c	\

NAME	=	my_printf

OBJ	=	$(SRC:.c=.o)

CFLAGS = -I./include -L./lib/my -lmy -Wall -Wextra -Werror

all: $(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean: 
	rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

run: re
	./$(NAME)

.PHONY: all fclean clean re