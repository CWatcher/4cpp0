#include <string>

#ifndef	CONTACT_HPP
#define CONTACT_HPP

class Contact
{
public:
	std::string	getFirstName();
	void		setFirstName(std::string FirstName);
//private:
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;
};

#endif
