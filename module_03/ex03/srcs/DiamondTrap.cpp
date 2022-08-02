/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 10:41:31 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/02 16:42:34 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : _name(ClapTrap::_name)
{
	ClapTrap::_name += "_clap_name";
	this->_name = ClapTrap::_name;
	this->_hit_point = FragTrap::_hit_point;
	this->_energy_point = ScavTrap::_energy_point;
	this->_attack_damage = FragTrap::_attack_damage;
	std::cout << _name << " : DiamondTrap Constructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
	ClapTrap::_name = name;
	ClapTrap::_name += "_clap_name";
	this->_hit_point = FragTrap::_hit_point;
	this->_energy_point = ScavTrap::_energy_point;
	this->_attack_damage = FragTrap::_attack_damage;
	std::cout << _name << " : DiamondTrap Constructor Called" << std::endl;

}

DiamondTrap::DiamondTrap(const DiamondTrap& rhs) : ClapTrap(rhs), ScavTrap(rhs), FragTrap(rhs)
{
	this->_name = rhs._name;
	std::cout << _name << " : DiamondTrap Copy Constructor Called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap& rhs)
{
	ClapTrap::operator=(rhs);
	ScavTrap::operator=(rhs);
	FragTrap::operator=(rhs);
	std::cout << _name << " : DiamondTrap Assignement Constructor Called" << std::endl;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << _name << " : DiamondTrap Destructor Called" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << _name << " : DiamondTrap name " << std::endl;
	std::cout << ClapTrap::_name << std::endl;
}