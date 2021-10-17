#include "PhoneBook.hpp"
#include <iostream>
#include <sstream>

PhoneBook::PhoneBook(): _i(0)
{}
void	PhoneBook::loadContact()
{
	std::string	input;

	std::cout << "First name << ";
	std::getline(std::cin, input);
	_contacts[_i].setFirstName(input);
	_i++;
	_i %= _n;
}
void	PhoneBook::listContacts()
{
	for (int i = 0; i < _n; i++)
		if (_contacts[i].getFirstName() != "")
			std::cout << _contacts[i].getFirstName() << std::endl;
}
int PhoneBook::_readIndex()
{

	bool	index_is_empty = true;
	int		index;

	while (index_is_empty)
	{
		std::cout << "Index (0 ≤ number < " << _n << ") << ";
		std::string	input;
		std::getline(std::cin, input);
		std::stringstream ss(input);
		ss >> index;
		if (!ss.fail() && index >= 0 && index < _n)
			index_is_empty = false;
	}
	return index;
}
void PhoneBook::showContact()
{
	int index = _readIndex();

	std::cout << _contacts[index].getFirstName() << std::endl;
}
