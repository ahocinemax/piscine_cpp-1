/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A_Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 21:08:45 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/04 13:50:21 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A_Animal.hpp"

A_Animal::A_Animal() : _type("No defined type")
{
	std::cout << "A_Animal Calling default constructor" << std::endl;
}

A_Animal::A_Animal(const A_Animal& src)
{
	if(this != &src)
		*this = src;
	std::cout << "A_Animal Calling copy constructor" << std::endl;

}

A_Animal& A_Animal::operator=(const A_Animal& rhs)
{
	if(this != &rhs)
		this->_type = rhs._type;
	std::cout << "A_Animal Calling assignment constructor" << std::endl;
	return (*this);
}

A_Animal::~A_Animal()
{
	std::cout << "A_Animal Calling default destructor" << std::endl;
}

const std::string &A_Animal::getType() const
{
	return (_type);
}
