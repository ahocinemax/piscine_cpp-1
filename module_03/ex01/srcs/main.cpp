/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:37:17 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/01 18:21:43 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap robot("Alain");
	ScavTrap bis(robot);

	bis = robot;
	
	robot.attack("Dominique");
	robot.attack("encore la pauvre Dominique");
	robot.takeDamage(5);
	robot.beRepaired(10);
	robot.takeDamage(50);
	robot.takeDamage(50);
	robot.beRepaired(10);
	robot.attack("toujours Dominique");
	robot.guardGate();
	
	return (0);
}