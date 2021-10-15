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
		{
			std::cout << "First name << ";
			std::cin >> input;
			c.setFirstName(input);
		}
	}
	std::cout << "\n";
}
