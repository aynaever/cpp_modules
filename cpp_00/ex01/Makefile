NAME = phonebook
FLAGS = -Wall -Werror -Wextra -std=c++98
FILES = Contact.cpp PhoneBook.cpp main.cpp

all: $(FILES)
	g++ $(FLAGS) $(FILES) -o $(NAME)

clean:
	rm -rf $(FILES:.cpp=.o)

fclean: clean
	rm -rf $(NAME)

.PHONY: all clean fclean
