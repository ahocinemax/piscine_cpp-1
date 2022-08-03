/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:20:28 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/04 01:07:48 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << _type << " : default constructor called" << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src)
{	
	if(this != &src)
	{
		_brain = new Brain();
		*this = src;
	}
	std::cout << _type << " : copy constructor called" << std::endl;
}

Dog & Dog::operator=(const Dog& rhs)
{
	if(this != &rhs)
	{
		this->_type = rhs._type;
		delete this->_brain;
		_brain = new Brain();
		this->_brain = rhs._brain;
	}
	std::cout << _type << " : assignment constructor called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete _brain;
	std::cout << _type << " : default destructor called" << std::endl;
}

 void Dog::makeSound() const
{
	std::cout << "Dog barks" << std::endl;
}