#include	"Contact.hpp"

void	Contact::printFirstName()
{
	if (firstName.size() <= 10)
	{
		std::cout << std::setw(10);
		std::cout << firstName;
	}
	else
		std::cout << firstName.substr(0, 9) << ".";
}

void	Contact::printLastName()
{
	if (lastName.size() <= 10)
	{
		std::cout << std::setw(10);
		std::cout << lastName;
	}
	else
		std::cout << lastName.substr(0, 9) << ".";
}

void	Contact::printPhoneNumber()
{
	if (phoneNumber.size() <= 10)
	{
		std::cout << std::setw(10);
		std::cout << phoneNumber;
	}
	else
		std::cout << phoneNumber.substr(0, 9) << ".";
}

void	Contact::printNickName()
{
	if (nickName.size() <= 10)
	{
		std::cout << std::setw(10);
		std::cout << nickName;
	}
	else
		std::cout << nickName.substr(0, 9) << ".";
}

void	Contact::printdarkestSecret()
{
	if (darkestSecret.size() <= 10)
	{
		std::cout << std::setw(10);
		std::cout << darkestSecret;
	}
	else
		std::cout << darkestSecret.substr(0, 9) << ".";
}

void	Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	 this->lastName = lastName;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	 this->phoneNumber = phoneNumber;
}

void	Contact::setNickName(std::string nickName)
{
	this->nickName = nickName;
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}
