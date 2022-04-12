#include	"Contact.hpp"
#include	"PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->counter = 0;
}

void	PhoneBook::add(Contact contact)
{
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
		std::cout << "|    " << this->counter << "     |";
		std::cout << this->contacts[i].getFirstName() << "|";
		std::cout << this->contacts[i].getLastName() << "|";
		std::cout << this->contacts[i].getNickName() << "|";
		i++;
	}
}
