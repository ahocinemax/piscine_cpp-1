/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:30:29 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/17 14:23:42 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{
	std::cout << "Data default constructor called" << std::endl;
}

Data::Data(int nbr) : _value(nbr)
{
	std::cout << "Data default constructor called" << std::endl;
}

Data::Data(const Data & src)
{
	if(this != &src)
		*this = src;
	std::cout << "Data copy constructor called" << std::endl;
}

Data & Data::operator=(const Data & rhs)
{
	if(this != &rhs)
	{
		_value = rhs._value;
	}
	std::cout << "Data assignment constructor called" << std::endl;
	return (*this);
}

Data::~Data()
{
	std::cout << "Data default destructor called" << std::endl;
}

const int & Data::getValue() const
{
	return (_value);
}

void	Data::setValue(int& value)
{
	this->_value = value;
}
