#include <iostream>

int main(int argc, char *argv[])
{
	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (argc-- > 1)
		std::cout << *++argv << ' ';
	std::cout << std::endl;
}
