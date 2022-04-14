# File              : Makefile
# Author            : Aymane N <anaouadi@students.42wolfsburg.de>
# Date              : 14.04.2022
# Last Modified Date: 14.04.2022
# Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>

NAME = main
FLAGS = -Wall -Wextra -Werror -std=c++98
FILES = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
OBJ = $(FILES:.cpp=.o)

all: $(OBJ)
	g++ $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ): $(FILES)
	g++ $(FLAGS) -c $(FILES)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
