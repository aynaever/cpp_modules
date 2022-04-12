#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include	"Contact.hpp"

class PhoneBook
{
private:
	Contact	contacts[8];
	int		counter;

public:
	PhoneBook();
	void	add();
	void	display();
};

#endif /* PHONEBOOK_HPP */
