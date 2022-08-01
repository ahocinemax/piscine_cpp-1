/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:37:17 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/01 18:37:38 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ScavTrap robot("Alain");
	ScavTrap bis(robot);
	FragTrap fragrobot("GECPAS");

	bis = robot;
	
	robot.attack("Dominique");
	robot.attack("encore la pauvre Dominique");
	fragrobot.highFiveGuys();
	robot.takeDamage(5);
	robot.beRepaired(10);
	robot.takeDamage(50);
	robot.takeDamage(50);
	robot.beRepaired(10);
	robot.attack("toujours Dominique");
	robot.guardGate();
	
	return (0);
}