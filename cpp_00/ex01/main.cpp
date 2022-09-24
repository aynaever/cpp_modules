#include	"PhoneBook.hpp"
#include	"Contact.hpp"
#include	<iostream>
void	printProgramInfo();


int main(int argc, char *argv[])
{
	string		command;
	PhoneBook	phoneBook;
	Contact		contact;

	printProgramInfo();
	do {
		std::cout << "Enter a Command : ";
		std::getline(std::cin, command);
		if (command.compare("ADD") == 0)
			phoneBook.add(contact);
		else if(command.compare("SEARCH") == 0)
			phoneBook.printContacts();
	} while (command.compare("EXIT") != 0);
	return (0);
}

void	printProgramInfo()
{
	std::cout << "===================================================================" << std::endl;
	std::cout << "Your PhoneBoork to look for any contact, LOL Not literally everyone" << std::endl;
	std::cout << "===================================================================" << std::endl;
	std::cout << "	Commands Available : ADD, SEARCH, EXIT" << std::endl;
	std::cout << "===================================================================" << std::endl;
	std::cout << "+ ADD		: save a new contact" << std::endl;
	std::cout << "+ SEARCH	: display a specific contact" << std::endl;
	std::cout << "+ EXIT		: quit the phonebook" << std::endl;
	std::cout << "===================================================================" << std::endl;
}
