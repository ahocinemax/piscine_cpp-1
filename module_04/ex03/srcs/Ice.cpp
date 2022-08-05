/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:06:08 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/05 16:28:50 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("cure")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice & src) : AMateria(src)
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice& Ice::operator=(const Ice &rhs)
{
	if(this != &rhs)
		 this->_type = rhs._type;
	std::cout << "Ice assignment constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice default destructor called" << std::endl;
}

Ice * Ice::clone() const
{
	Ice * clone = new Ice();
	return (clone);
}
