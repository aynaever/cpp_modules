#include	<Contact.hpp>

std::string	Contact::getFirstName()
{
	return firstName;
}

std::string	Contact::getLastName()
{
	return	(lastName);
}

std::string	Contact::getPhoneNumber()
{
	return	(phoneNumber);
}

std::string	Contact::getNickName()
{
	return	(nickName);
}

std::string	Contact::getDarkestSecret()
{
	return	(darkestSecret);
}

void	Contact::setFirstName(std::string firstName)
{
	firstName = firstName;
}

void	Contact::setLastName(std::string lastName)
{
	 lastName = lastName;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	 phoneNumber = phoneNumber;
}

void	Contact::setNickName(std::string nickName)
{
	nickName = nickName;
}

void	Contact::setDarkestSecret(std::string darkestSecret)
{
	darkestSecret = darkestSecret;
}
