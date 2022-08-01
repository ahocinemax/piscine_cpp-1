/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:37:17 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/01 14:44:47 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap robot("Alain");
	
	robot.attack("Dominique");
	robot.attack("encore la pauvre Dominique");
	robot.takeDamage(5);
	robot.beRepaired(10);
	robot.takeDamage(10);
	robot.takeDamage(10);
	robot.beRepaired(10);
	robot.attack("toujours Dominique");
	
	
	return (0);
}