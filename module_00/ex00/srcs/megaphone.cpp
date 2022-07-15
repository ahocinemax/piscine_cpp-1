#include <iostream>
#include <cstring>

void	ft_putstr_uppercase( char *str)
{
	for (size_t i = 0; i < std::strlen(str); i++)
				std::cout << (char) std::toupper(str[i]);
}

int main(int ac, char **av)
{
	if (ac >= 2)
	{
		for (size_t i = 1; av[i]; i++)
		{
			ft_putstr_uppercase(av[i]);
			if (av[i + 1])
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}