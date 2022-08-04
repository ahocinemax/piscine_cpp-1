/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:53:19 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/04 11:03:38 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << _type << " : default constructor called" << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src)
{
	if(this != &src)
	{
		_brain = new Brain();
		*this = src;
	}
	std::cout << _type << " : copy constructor called" << std::endl;	
}

Cat & Cat::operator=(const Cat& rhs)
{
	if(this != &rhs)
	{
		_type = rhs._type;
		delete _brain;
		_brain = new Brain();
		*_brain = *(rhs._brain);
	}
	std::cout << _type << " : assignment constructor called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete _brain;
	std::cout << _type << " : default destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat meow" << std::endl;
}