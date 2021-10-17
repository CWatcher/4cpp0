#ifndef PHONEBOOK

#include "Contact.hpp"

class	PhoneBook
{
public:
	PhoneBook();
	void loadContact();
	void listContacts();
	void showContact();
	void showContact(int i);
private:
	int _readIndex();
	static const int	_n = 8;
	int					_i;
	Contact 			_contacts[_n];
};

#endif
