/**
 * File              : PhoneBook.cpp
 * Author            : Aymane N <anaouadi@students.42wolfsburg.de>
 * Date              : 24.09.2022
 * Last Modified Date: 24.09.2022
 * Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>
 */

#include	"PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	counter = 0;
}

void	PhoneBook::add(Contact contact)
{
	string	fields[5] = {"First Name", "Last Name", "Nick Name", "Phone Number", "Darkest Secret"};
	string	temp;
	Contact	cont;
	int		i;

	i = 0;
	if (this->counter > 7)
		this->counter = 7;

	while (i < 5)
	{
		std::cout << "Enter your " << fields[i] << " : ";
		std::getline (std::cin, temp);

		switch (i)
		{
			case 0:
				cont.setFirstName(temp);
				break;
			case 1:
				cont.setLastName(temp);
				break;
			case 2:
				cont.setNickName(temp);
				break;
			case 3:
				cont.setPhoneNumber(temp);
				break;
			case 4:
				cont.setDarkestSecret(temp);
				break;
		}
		i++;
	}

	this->contacts[this->counter] = cont;
	this->counter++;
}

void	printFirstTenChars(string text)
{
	int	i;

	i = 0;
	if (text.size() >= 10)
	{
		while (i < 9)
		{
			std::cout << text[i];
			i++;
		}
		std::cout << '.';
	}
	else
	{
		std::cout << std::setw(10) << text;
	}
}

void	PhoneBook::printContact(int index)
{
	std::cout	<< std::setw(10) << index;
	printFirstTenChars(this->contacts[index].getFirstName());
	printFirstTenChars(this->contacts[index].getLastName());
	printFirstTenChars(this->contacts[index].getNickName());
	std::cout << std::endl;
}

void	PhoneBook::printContacts()
{
	int	i;

	std::cout	<< "-----------------------------------------" << std::endl;
	std::cout	<< std::setw(10) << "index"
				<< std::setw(10) << "|first name"
				<< std::setw(10) << "|last name"
				<< std::setw(10) << "nickname|"
				<< std::endl;
	std::cout	<< "-----------------------------------------" << std::endl;
	i = 0;
	while (i < counter)
	{
		printContact(i);
		i++;
	}
}
