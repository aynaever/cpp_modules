/**
 * File              : Contact.hpp
 * Author            : Aymane N <anaouadi@students.42wolfsburg.de>
 * Date              : 24.09.2022
 * Last Modified Date: 24.09.2022
 * Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>
 */

#ifndef	CONTACT_HPP
#define	CONTACT_HPP

#include	<string>
using	namespace	std;

class	Contact
{
private:
	string	firstName;
	string	lastName;
	string	nickName;
	string	phoneNumber;
	string	darkestSecret;

public:
	void	setFirstName(string firstName);
	void	setLastName(string lastName);
	void	setNickName(string nickName);
	void	setPhoneNumber(string phoneNumber);
	void	setDarkestSecret(string darkestSecret);
	string	getFirstName(string firstName);
	string	getLastName(string lastName);
	string	getNickName(string nickName);
	string	getPhoneNumber(string phoneNumber);
	string	getDarkestSecret(string darkestSecret);
};

#endif
