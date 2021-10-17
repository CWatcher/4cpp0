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
	for (int i = 0; i < _n; i++)
		if (contacts[i].getFirstName() != "")
			std::cout << contacts[i].getFirstName() << std::endl;
}
void PhoneBook::showContact()
{
	std::string	input;

	std::cout << "Index << ";
	std::getline(std::cin, input);
}
