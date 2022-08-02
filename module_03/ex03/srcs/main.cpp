/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:37:17 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/02 16:41:14 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap robot("Alain");

	robot.attack("Dominique");
	robot.attack("encore la pauvre Dominique");
	robot.highFiveGuys();
	robot.takeDamage(5);
	robot.beRepaired(10);
	robot.takeDamage(50);
	robot.takeDamage(50);
	robot.beRepaired(10);
	robot.attack("toujours Dominique");
	robot.guardGate();
	robot.whoAmI();
	
	return (0);
}