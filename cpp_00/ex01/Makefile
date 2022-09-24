# File              : Makefile
# Author            : Aymane N <anaouadi@students.42wolfsburg.de>
# Date              : 24.09.2022
# Last Modified Date: 24.09.2022
# Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>

NAME = main
CFILES = main.cpp  PhoneBook.cpp Contact.cpp
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
