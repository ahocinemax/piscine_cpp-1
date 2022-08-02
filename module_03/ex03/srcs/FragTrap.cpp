/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 18:29:04 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/02 16:05:29 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_hit_point = 100;
	_energy_point = 100;
	_attack_damage = 30;
	std::cout << _name << " : FragTrap Constructor Called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hit_point = 100;
	_energy_point = 100;
	_attack_damage = 30;
	std::cout << _name << " : FragTrap Constructor Called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& rhs) : ClapTrap(rhs)
{
	std::cout << _name << " : FragTrap Copy Constructor Called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
	ClapTrap::operator=(rhs);
	std::cout << _name << " : FragTrap Copy Assignment Called" << std::endl;
	return (*this);
}

FragTrap ::~FragTrap(void)
{
	std::cout << _name << " : FragTrap Constructor Called" << std::endl;
}

void FragTrap::highFiveGuys(void)
{
	std::cout  << "FragTrap " << _name << " HIGH FIVES GUYS" << std::endl;
}