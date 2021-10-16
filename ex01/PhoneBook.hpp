#ifndef PHONEBOOK

#include "Contact.hpp"

class	PhoneBook
{
public:
	PhoneBook();
	void loadContact();
	void printContacts();
private:
	static const int	n = 8;
	int					i;
	Contact 			contacts[n];
};

#endif
