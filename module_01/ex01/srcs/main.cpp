/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:07:31 by nburat-d          #+#    #+#             */
/*   Updated: 2022/07/29 11:07:32 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		{
			std::cout << i << " : ";
			zombie[i].announce();
		}
		delete [] zombie;
	}
	return (0);
}
