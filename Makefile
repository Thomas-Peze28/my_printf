##
## EPITECH PROJECT, 2024
## makefile printf
## File description:
## makfile
##

all: build_lib

build_lib:
		make -C ./lib/my/

clean:
	make clean -C ./lib/my/

fclean:
	make fclean -C ./lib/my/
	rm libmy.a

re: fclean all
