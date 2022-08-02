/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:08:45 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/02 22:26:47 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("No defined type")
{
	std::cout << "Animal Calling default constructor" << std::endl;
}

Animal::Animal(const Animal& src)
{
	_type = src._type;
	std::cout << "Animal Calling copy constructor" << std::endl;

}

Animal& Animal::operator=(const Animal& rhs)
{
	_type = rhs._type;
	std::cout << "Animal Calling assignment constructor" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Calling default destructor" << std::endl;
}

const std::string &Animal::getType() const
{
	return (_type);
}

void Animal::makeSound() const
{
	std::cout << "The animal makes sound" << std::endl;
}