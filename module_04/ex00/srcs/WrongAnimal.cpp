/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:08:45 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/02 22:19:25 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("No defined type")
{
	std::cout << "WrongAnimal Calling default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	_type = src._type;
	std::cout << "WrongAnimal Calling copy constructor" << std::endl;

}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs)
{
	_type = rhs._type;
	std::cout << "WrongAnimal Calling assignment constructor" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Calling default destructor" << std::endl;
}

const std::string &WrongAnimal::getType() const
{
	return (_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "The WrongAnimal makes sound" << std::endl;
}