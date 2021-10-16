#include "PhoneBook.hpp"
#include <iostream>
int	main()
{
	PhoneBook	phoneBook;
	std::string	input;
	Contact 	c;

	while (std::cin && input != "EXIT")
	{
		std::cout << "Command < ";
		std::getline(std::cin, input);
		if (input == "ADD")
			phoneBook.loadContact();
		else if (input == "SEARCH")
			;

	}
	std::cout << "\n";
}
