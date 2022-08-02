/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 12:20:25 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/02 17:00:08 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("No name"), _hit_point(10), _energy_point(10), _attack_damage(0) {}

ClapTrap::ClapTrap(std::string name)
: _name(name), _hit_point(10), _energy_point(10), _attack_damage(0)
{
	std::cout << _name << " : ClapTrap Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& rhs)
{
	this->_name = rhs._name;
	this->_hit_point = rhs._hit_point;
	this->_energy_point = rhs._energy_point;
	this->_attack_damage = rhs._attack_damage;
	std::cout << this->_name << " : ClapTrap Copy Constructor Called" << std::endl;	
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
	this->_name = rhs._name;
	this->_hit_point = rhs._hit_point;
	this->_energy_point = rhs._energy_point;
	this->_attack_damage = rhs._attack_damage;
	std::cout << this->_name << " : ClapTrap Copy Assignment Called" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << " : ClapTrap Destructor Called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (_hit_point > 0 && _energy_point > 0)
	{
		std::cout <<  "ClapTrap " << _name << " attacks " << target<< ", causing " << _attack_damage << " points of damage!" << std::endl;
		_energy_point--;
	}
	else if (_hit_point <= 0)
		std::cout <<  "ClapTrap " << _name << " is dead" << std::endl;
	else if ( _energy_point <= 0)
		std::cout <<  "ClapTrap " << _name << " don't have enought energy point to attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_point <= 0)
		std::cout << "ClapTrap " << _name << " is already dead" << std::endl;
	else if (_hit_point > 0 && amount > 0)
	{
		std::cout <<  "ClapTrap " << _name << " got attacked and loses " << amount << " energy points !" << std::endl;
		_hit_point -= amount;
		_energy_point--;
		if (_hit_point <= 0)
			std::cout << "ClapTrap " << _name << " got killed" << std::endl;
	}
	else if(amount == 0)
		std::cout << "Error : the amount of damage can't be zero" << std::endl;	
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit_point <= 0)
		std::cout << "ClapTrap " << _name << " is already dead" << std::endl;
	else if (_hit_point > 0 && _energy_point > 0)
	{
		std::cout <<  "ClapTrap " << _name << " got repared, adding " << amount << " hit points to his health!" << std::endl;
		_energy_point--;
		_hit_point += amount;
	}
	else if ( _energy_point <= 0)
		std::cout <<  "ClapTrap " << _name << " don't have enought energy point to get repaired" << std::endl;
}
