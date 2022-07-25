#include " Zombie.hpp"

int main()
{
	Zombie *zomb; 

	zomb = newZombie("Gerard");
	randomChump("Alan");
	zomb->announce();
	delete(zomb);
	return (0);
}
