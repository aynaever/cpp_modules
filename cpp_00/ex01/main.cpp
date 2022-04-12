#include	"PhoneBook.hpp"
#include	"Contact.hpp"

int main(void)
{
	PhoneBook 	myBook;
	Contact		contact;

	contact.setFirstName("Aymane");
	myBook.add(contact);
	myBook.display();
	return (0);
}
