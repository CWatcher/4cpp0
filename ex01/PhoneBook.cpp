#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(): i(0) {};

void	PhoneBook::loadContact()
{
	std::string	input;

	std::cout << "First name << ";
	std::getline(std::cin, input);
	contacts[i].setFirstName(input);
	i++;
	i %= n;
}
void	PhoneBook::printContacts()
{
	std::string	contactField;
	for (Contact &contact: contacts)
		if (contact.getFirstName() != "")
			std::cout << contact.getFirstName() << std::endl;
}
