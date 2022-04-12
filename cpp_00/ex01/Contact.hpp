#ifndef CONTACT_HPP
#define CONTACT_HPP

#include	<iostream>
#include	<string>

class Contact
{
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;

public:
	Contact();
	virtual ~Contact();
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getPhoneNumber();
	std::string	getNickName();
	std::string	getDarkestSecret();
	void	setFirstName(std::string firstName);
	void	setLastName(std::string lastName);
	void	setPhoneNumber(std::string phoneNumber);
	void	setNickName(std::string nickName);
	void	setDarkestSecret(std::string darkestSecret);
};

#endif /* CONTACT_HPP */
