/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:08:07 by nburat-d          #+#    #+#             */
/*   Updated: 2022/07/29 11:08:08 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
: _name(name), _weapon(weapon) {}

HumanA::~HumanA(void){}

const std::string&	HumanA::getName(void) const
{
	return (_name);
}

void	HumanA::setName(std::string name)
{
	_name = name; 
}

void	HumanA::attack(void) const
{
	std::cout << _name << " attacks with their" << _weapon.getType() << std::endl;
}