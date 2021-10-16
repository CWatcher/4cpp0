#ifndef PHONEBOOK

#include "Contact.hpp"

class	PhoneBook
{
public:
	PhoneBook();
	void loadContact();
	void listContacts();
	void showContact(int i);
private:
	static const int	_n = 8;
	int					_i;
	Contact 			contacts[_n];
};

#endif
