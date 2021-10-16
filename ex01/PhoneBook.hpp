#ifndef PHONEBOOK

#include "Contact.hpp"

class	PhoneBook
{
public:
	void loadContact();
private:
	static const int	n = 8;
	int					i = 0;
	Contact 			contacts[n];
};

#endif
