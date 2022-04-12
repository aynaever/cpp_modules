#include	"Contact.hpp"
#include	"PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->counter = 0;
}

void	PhoneBook::add()
{
	std::string	temp;
	Contact		contact;

	std::cout << "First Name : ";
	std::cin >> temp;
	contact.setFirstName(temp);
	std::cout << "Last Name : ";
	std::cin >> temp;
	contact.setLastName(temp);
	std::cout << "Phone Number : ";
	std::cin >> temp;
	contact.setPhoneNumber(temp);
	std::cout << "Nick Name : ";
	std::cin >> temp;
	contact.setNickName(temp);
	std::cout << "Darkest Secret : ";
	std::cin >> temp;
	contact.setDarkestSecret(temp);
	this->contacts[counter] = contact;
	if (this->counter < 7)
		this->counter++;
}

void	PhoneBook::display()
{
	int	i;

	i = 0;
	std::cout << "|  index   |first name|last name |nick name |" << std::endl;
	while (i < counter)
	{
		std::cout << "|    " << i << "     |";
		this->contacts[i].printFirstName();
		std::cout << "|";
		this->contacts[i].printLastName();
		std::cout << "|";
		this->contacts[i].printNickName();
		std::cout << "|" << std::endl;
		i++;
	}
}
