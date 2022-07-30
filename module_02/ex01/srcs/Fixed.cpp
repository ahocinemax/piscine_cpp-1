/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:43:21 by nburat-d          #+#    #+#             */
/*   Updated: 2022/07/29 18:27:51 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const int val)
{
	std::cout << "Default constructor called" << std::endl;
	_raw_bits = val;
}

Fixed::Fixed(const float val)
{
	std::cout << "Default constructor called" << std::endl;
	_raw_bits = val;
}


Fixed::Fixed(const Fixed& old)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_raw_bits = old._raw_bits;
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
