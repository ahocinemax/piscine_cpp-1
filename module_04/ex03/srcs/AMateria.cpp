/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:04:22 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/05 15:34:04 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type)
{
	_type = type;
	std::cout << "AMateria default constructor called" << std::endl;
}
AMateria::AMateria(const AMateria & src)
{
	if(this != &src)
		*this = src;
	std::cout << "AMateria copy constructor called" << std::endl;

}
AMateria& AMateria::operator=(const AMateria & rhs)
{
	if(this != &rhs)
		this->_type = rhs._type;
		std::cout << "AMateria assignment constructor called" << std::endl;
	return (*this);
}
AMateria::~AMateria()
{
	std::cout << "AMateria default destructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
	return(_type);
}

virtual void AMateria::use(ICharacter &target)
{
	
}