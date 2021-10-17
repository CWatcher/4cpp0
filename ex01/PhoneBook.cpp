#include "PhoneBook.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>

PhoneBook::PhoneBook(): _i(0)
{}
void	PhoneBook::loadContact()
{
	std::string	input;

	if (std::cin) {
	std::cout << "First name << ";
	std::getline(std::cin, input);
	_contacts[_i].setFirstName(input);
	}
	if (std::cin) {
	std::cout << "Last name << ";
	std::getline(std::cin, input);
	_contacts[_i].setLastName(input);
	}
	if (std::cin) {
	std::cout << "Nickname << ";
	std::getline(std::cin, input);
	_contacts[_i].setNickname(input);
	}
	if (std::cin) {
	std::cout << "Phone number << ";
	std::getline(std::cin, input);
	_contacts[_i].setPhoneNumber(input);
	}
	if (std::cin) {
	std::cout << "Darkest secret << ";
	std::getline(std::cin, input);
	_contacts[_i].setDarkestSecret(input);
	}
	_i++;
	_i %= _n;
}
static std::string truncateString(std::string s)
{
	const int l = 10;

	if (s.length() <= l)
		return s;
	return s.substr(0, l - 1).append(".");
}
void	PhoneBook::listContacts()
{
	const int w = 10;

	for (int i = 0; i < _n; i++)
		if (_contacts[i].getFirstName() != ""
			|| _contacts[i].getLastName() != ""
			|| _contacts[i].getNickname() != ""
			|| _contacts[i].getPhoneNumber() != ""
			|| _contacts[i].getDarkestSecret() != ""
		)
			std::cout << std::setw(w) << i  << "|"
				<< std::setw(w) << truncateString(_contacts[i].getFirstName()) << "|"
				<< std::setw(w) << truncateString(_contacts[i].getLastName()) << "|"
				<< std::setw(w) << truncateString(_contacts[i].getNickname()) << std::endl;
}
int PhoneBook::_readIndex()
{

	bool	index_is_empty = true;
	int		index;

	while (std::cin && index_is_empty)
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
