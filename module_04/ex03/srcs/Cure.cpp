/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 16:05:52 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/05 16:30:55 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure & src) : AMateria(src)
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure& Cure::operator=(const Cure &rhs)
{
	if(this != &rhs)
		 this->_type = rhs._type;
	std::cout << "Cure assignment constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure default destructor called" << std::endl;
}

Cure * Cure::clone() const
{
	Cure * clone = new Cure();
	return (clone);
}