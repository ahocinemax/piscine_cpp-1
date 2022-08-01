/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 14:53:54 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/01 18:23:31 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hit_point = 100;
	_energy_point = 50;
	_attack_damage = 20;
	std::cout << _name << " : ScavTrap Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& rhs) : ClapTrap(rhs)
{
	std::cout << _name << " : ScavTrap Copy Constructor Called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
	ClapTrap::operator=(rhs);
	std::cout << _name << " : ScavTrap Copy Assignment Called" << std::endl;
	return (*this);
}

ScavTrap ::~ScavTrap()
{
	std::cout << _name << " : ScavTrap Constructor Called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout  << "ScavTrap " << _name << " is now in Gater keeper mode." << std::endl;
}