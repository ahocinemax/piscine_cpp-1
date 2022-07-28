/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:43:21 by nburat-d          #+#    #+#             */
/*   Updated: 2022/07/28 19:12:18 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	_raw_val = 0;
}

Fixed::Fixed(const Fixed& old)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_raw_val = old._raw_val;
}

Fixed& Fixed::operator=(const Fixed& old)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_raw_val = old._raw_val;
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

const int& Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_raw_val);	
}

void Fixed::setRawBits(int const raw)
{
	this->_raw_val = raw;
}
