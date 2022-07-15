#include <cctype>
#include <string>
#include <iostream>
#include <cstring>

int main(int ac, char **av)
{
	if (ac >= 2)
	{
		for (size_t i = 1; av[i]; i++)
		{
			for (size_t j = 0; j < std::strlen(av[i]); j++)
				std::cout << (char) std::toupper(av[i][j]);
			if (av[i + 1])
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

}