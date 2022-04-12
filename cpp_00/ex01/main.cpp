#include	"PhoneBook.hpp"
#include	"Contact.hpp"

int main(void)
{
	PhoneBook	myBook;
	std::string	command;

	std::cout << "Welcome to the 80's!" << std::endl;
	std::cout << "Commands Available :" << std::endl;
	std::cout << "ADD : to add a new contact" << std::endl;
	std::cout << "SEARCH : to diplsay available contacts" << std::endl;

	do {
		std::cout << "Enter Command :";
		std::cin >> command;
		if (command.compare("ADD") == 0)
			myBook.add();
		if (command.compare("SEARCH") == 0)
			myBook.display();
	} while (command.compare("EXIT"));
	return (0);
}
