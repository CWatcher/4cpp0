#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook(): _i(0)
{}
void	PhoneBook::loadContact()
{
	std::string	input;

	std::cout << "First name << ";
	std::getline(std::cin, input);
	contacts[_i].setFirstName(input);
	_i++;
	_i %= _n;
}
void	PhoneBook::listContacts()
{
	std::string	contactField;
	for (int i = 0; i < _n; i++)
		if (contacts[i].getFirstName() != "")
			std::cout << contacts[i].getFirstName() << std::endl;
	std::cout << "Index << ";
	int index;
	try {std::cin >> index;}
	catch (...) {std::cout << "Exception!\n";}
	std:: cout << index << std::endl;
}
