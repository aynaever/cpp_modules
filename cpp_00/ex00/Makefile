NAME = megaphone
CFILES = megaphone.cpp
FLAGS = -Wall -Werror -Wextra -std=c++98

all:
	c++ $(CFILES) -o $(NAME)

run: all
	./$(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all
