#include " Zombie.hpp"
#include <stdlib.h>

int main(int ac, char **av)
{
	Zombie *zombie;
	int nb_zomb = 0;

	if (ac == 2)
	{
		nb_zomb = atoi(av[1]);
		zombie = zombieHorde(nb_zomb, "bernard");
		for(int i = 0; i < nb_zomb; i++)
			zombie[i].announce();
		delete [] zombie;
	}
	return (0);
}
