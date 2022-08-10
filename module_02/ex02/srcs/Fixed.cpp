/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:43:21 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/10 19:59:24 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	_raw_bits = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nbr)
{
	_raw_bits = nbr << _fract_bits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nbr)
{
	std::cout << "Float constructor called" << std::endl;
	_raw_bits = roundf(nbr * (1 << _fract_bits));
}

Fixed::Fixed(const Fixed& old)
{
	if(this != &old)
		*this = old;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& old)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_raw_bits = old._raw_bits;
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

const int& Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_raw_bits);	
}

void Fixed::setRawBits(int const raw)
{
	this->_raw_bits = raw;
}


float Fixed::toFloat() const
{
	return (this->_raw_bits / (float)(1 << _fract_bits));
}

int Fixed::toInt() const
{
	return(this->_raw_bits >> _fract_bits);
}

std::ostream & operator<<(std::ostream &os, const Fixed &rhs)
{
	os << rhs.toFloat();
	return (os);
};