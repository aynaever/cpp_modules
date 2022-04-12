#include	"PhoneBook.hpp"
#include	"Contact.hpp"

int main(void)
{
	PhoneBook 	myBook;
	Contact		contact;

	contact.setFirstName("Aymane");
	contact.setLastName("Naouadir");
	contact.setNickName("Xibani");
	myBook.add(contact);
	myBook.display();
	return (0);
}
