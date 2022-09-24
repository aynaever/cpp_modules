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

void	PhoneBook::printContacts()
{
	std::cout << "Number of contacts : " << this->counter << std::endl;
}
