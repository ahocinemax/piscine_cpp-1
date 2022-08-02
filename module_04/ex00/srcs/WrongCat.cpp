/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:53:19 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/02 22:21:46 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << _type << " : default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal(src)
{
	std::cout << _type << " : copy constructor called" << std::endl;	
}

WrongCat & WrongCat::operator=(const WrongCat& rhs)
{
	WrongAnimal::operator=(rhs);
	std::cout << _type << " : assignment constructor called" << std::endl;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << _type << " : default destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat meow" << std::endl;
}