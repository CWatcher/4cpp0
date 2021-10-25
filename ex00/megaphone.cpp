#include <iostream>
#include <cctype>

int main(int, char *argv[])
{
	if (!*++argv)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (; *argv; argv++)
	{
		std::string	s(*argv);
		std::cout << std::uppercase << s;
	}
	std::cout << std::endl;
}
