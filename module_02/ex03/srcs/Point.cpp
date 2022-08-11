/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 21:08:05 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/11 09:35:47 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
	std::cout << "Point default constructor called" << std::endl;
}

Point::Point(const float x, const float y): _x(Fixed(x)), _y(Fixed(y))
{
	std::cout << "Point default constructor called" << std::endl;
}

Point::Point(const Point & src)
{
	if(this != &src)
		*this = src;
	std::cout << "Point copy constructor called" << std::endl;
}

Point & Point::operator=(const Point & rhs)
{
	if(this != &rhs)
	{
		Fixed *ptrx = const_cast<Fixed*>(&this->_x);
		Fixed *ptry = const_cast<Fixed*>(&this->_y);
		*ptrx = rhs._x;
		*ptry = rhs._y;
	}
	std::cout << "Point assignment constructor called" << std::endl;
	return (*this);
}

Point::~Point()
{
	std::cout << "Point default destructor called" << std::endl;
}

const Fixed& Point::getX() const
{
	return (this->_x);
}

const Fixed& Point::getY() const
{
	return(this->_y);
}

