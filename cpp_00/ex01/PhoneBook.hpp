/**
 * File              : PhoneBook.hpp
 * Author            : Aymane N <anaouadi@students.42wolfsburg.de>
 * Date              : 24.09.2022
 * Last Modified Date: 24.09.2022
 * Last Modified By  : Aymane N <anaouadi@students.42wolfsburg.de>
 */

#ifndef	PHONEBOOK_HPP
#define	PHONEBOOK_HPP

#include	"Contact.hpp"
#include	<iostream>
#include	<iomanip>

class	PhoneBook
{
private:
	int		counter;
	Contact	contacts[8];

public:
	PhoneBook();
	void	add(Contact contact);
	void	printContacts();
};

#endif
