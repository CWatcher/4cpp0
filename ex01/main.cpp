#include "PhoneBook.hpp"
#include <iostream>
int	main()
{
	PhoneBook	phoneBook;
	std::string	input;
	Contact 	c;

	while (std::cin && input != "EXIT")
	{
		std::cout << "Command (ADD | SEARCH | EXIT) < ";
		std::getline(std::cin, input);
		if (input == "ADD" || input == "A")
			phoneBook.loadContact();
		else if (input == "SEARCH" || input == "S") {
			phoneBook.listContacts();
			phoneBook.showContact();
		}
	}
	std::cout << "\n";
}
