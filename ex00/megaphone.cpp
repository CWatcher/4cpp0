#include <iostream>
#include <cctype>

int main(int, char *argv[])
{
	if (!*++argv)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (; *argv; argv++)
		for (char *s = *argv; *s; s++)
			std::cout << (char)toupper(*s);
	std::cout << std::endl;
}
