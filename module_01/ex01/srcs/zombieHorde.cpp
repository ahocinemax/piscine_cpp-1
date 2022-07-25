#include " Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if(N <= 0)
		return (NULL);
	Zombie *p_zomb = new Zombie[N];
	for(int i = 0; i < N; i++)
		p_zomb[i].setName(name);
	return (p_zomb);
}