/**
 * File              : Contact.cpp
 * Author            : Aymane N <anaouadi@students.42wolfsburg.de>
 * Date              : 24.09.2022
 * Last Modified Date: 24.09.2022
 * Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>
 */

#include	"Contact.hpp"
#include	<string>
using	namespace std;

void	Contact::setFirstName(string firstName)
{
	this->firstName = firstName;
}

void	Contact::setLastName(string lastName)
{
	this->lastName = lastName;
}

void	Contact::setNickName(string nickName)
{
	this->nickName = nickName;
}

void	Contact::setPhoneNumber(string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

string	Contact::getFirstName()
{
	return (this->firstName);
}

string	Contact::getLastName()
{
	return (this->lastName);
}

string	Contact::getNickName()
{
	return (this->nickName);
}

string	Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}

string	Contact::getDarkestSecret()
{
	return (this->darkestSecret);
}
