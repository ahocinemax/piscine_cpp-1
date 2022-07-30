/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:07:02 by nburat-d          #+#    #+#             */
/*   Updated: 2022/07/29 11:07:03 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
