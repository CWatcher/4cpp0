#include "PhoneBook.hpp"
#include <iostream>

void	PhoneBook::loadContact()
{
	std::string	input;

	std::cout << "First name << ";
	std::getline(std::cin, input);
	contacts[i].setFirstName(input);
	i++;
	i %= n;
}
