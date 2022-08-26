/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:36:57 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/25 17:37:45 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

MutantStack::MutantStack()
{
	std::cout << "MutantStack default constructor called" << std::endl;
}

MutantStack::MutantStack(const MutantStack & src)
{
	*this = src;
	std::cout << "MutantStack copy constructor called" << std::endl;
}

MutantStack & MutantStack::operator=(const MutantStack & rhs)
{
	if(this != &rhs)
	{
		
	}
	std::cout << "MutantStack assignment constructor called" << std::endl;
	return (*this);
}

MutantStack::~MutantStack()
{
	std::cout << "MutantStack default destructor called" << std::endl;
}