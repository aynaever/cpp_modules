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

string	Contact::getFirstName(string firstName)
{
	return (this->firstName);
}

string	Contact::getLastName(string lastName)
{
	return (this->lastName);
}

string	Contact::getNickName(string nickName)
{
	return (this->nickName);
}

string	Contact::getPhoneNumber(string phoneNumber)
{
	return (this->phoneNumber);
}

string	Contact::getDarkestSecret(string darkestSecret)
{
	return (this->darkestSecret);
}
