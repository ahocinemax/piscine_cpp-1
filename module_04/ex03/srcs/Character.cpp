/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 15:20:02 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/06 16:09:57 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"


Character::Character(std::string name)
{
	_name = name;
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(const Character& src)
{
	if(this != &src)
		*this = src;
	std::cout << "Character copy constructor called" << std::endl;
}

Character & Character::operator=(const Character & rhs)
{
	int i = 0;
	
	if(this != &rhs)
	{
		_name = rhs._name;
		while (i < 4)
		{
			_inventory[i] = rhs._inventory[i];
			i++;
		}
	}
	std::cout << "Character assignment constructor called" << std::endl;
}

Character::~Character()
{
	
}

std::string const & Character::getName() const
{
	
}

void Character::equip(AMateria* m)
{
	
}

void Character::unequip(int idx)
{
	
}

void Character::use(int idx, ICharacter& target)
{
	
}
