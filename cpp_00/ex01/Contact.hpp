#ifndef CONTACT_HPP
#define CONTACT_HPP

#include	<iostream>
#include	<cstring>
#include	<iomanip>

class Contact
{
private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;

public:
	void	setFirstName(std::string firstName);
	void	setLastName(std::string lastName);
	void	setPhoneNumber(std::string phoneNumber);
	void	setNickName(std::string nickName);
	void	setDarkestSecret(std::string darkestSecret);
	void	printFirstName();
	void	printLastName();
	void	printPhoneNumber();
	void	printNickName();
	void	printdarkestSecret();
};

#endif /* CONTACT_HPP */
