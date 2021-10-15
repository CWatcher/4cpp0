#include "PhoneBook.hpp"
#include <iostream>

int	main()
{
	PhoneBook	phoneBook;

	phoneBook.contacts[0].firstName = "abc";
	Contact c;
	std::string s = "aaa";
	c.setFirstName(s);
	s = "bbb";
	std::cout << c.firstName << '\n';
}
