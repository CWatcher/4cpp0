#include <string>

#ifndef	CONTACT_HPP
#define CONTACT_HPP

class Contact
{
public:
	std::string	getFirstName();
	std::string	getLastName();
	std::string	getNickname();
	std::string	getPhoneNumber();
	std::string	getDarkestSecret();
	void		setFirstName(std::string FirstName);
	void		setLastName(std::string FirstName);
	void		setNickname(std::string FirstName);
	void		setPhoneNumber(std::string FirstName);
	void		setDarkestSecret(std::string FirstName);
private:
	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_phoneNumber;
	std::string	_darkestSecret;
};

#endif
