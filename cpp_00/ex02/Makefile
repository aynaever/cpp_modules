# File              : Makefile
# Author            : Aymane N <anaouadi@students.42wolfsburg.de>
# Date              : 14.04.2022
# Last Modified Date: 14.04.2022
# Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>

NAME = main
FLAGS = -Wall -Werror -Wextra -std=c++98
FILES = Account.cpp tests.cpp
OBJ = $(FILES:.cpp=.o)

all: $(OBJ)
	g++ $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ): $(FILES)
	g++ -c $(FILES)

clean:
	rm -rf $(FILES:.cpp=.o)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
