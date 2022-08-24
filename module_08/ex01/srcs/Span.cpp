/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 21:10:07 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/24 23:00:11 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _maxStorage(n)
{
	//std::cout << "Span default constructor called" << std::endl;
}

Span::Span(const Span & src)
{
	*this = src;
	//std::cout << "Span copy constructor called" << std::endl;
}

Span & Span::operator=(const Span & rhs)
{
	if(this != &rhs)
	{
		this->vec = rhs.vec;
		this->_maxStorage = rhs._maxStorage;
	}
	//std::cout << "Span assignment constructor called" << std::endl;
	return (*this);
}

Span::~Span()
{
	//std::cout << "Span default destructor called" << std::endl;
}

void	Span::addNumber(int nbr)
{
	if(vec.size() < _maxStorage)
		vec.push_back(nbr);
	else
		throw TOO_MUCH_NUMBER();
}

int		Span::shortestSpan()
{
	int	shorspan;
	std::vector<int>::iterator ptri; 
	std::vector<int>::iterator ptrj;
	
	if(!vec.empty() && vec.size() != 1)
	{
		ptri = vec.begin();
		ptrj = ptri + 1;
		shorspan = abs(*ptri - *ptrj);
		
		while (ptri != vec.end())
		{
			ptrj = ptri + 1;
			while (ptrj != vec.end())
			{
				if(abs(*ptri - *ptrj) < shorspan)
					shorspan = abs(*ptri - *ptrj);
				ptrj++;
			}
			ptri++;
		}
	}
	else
		throw NOT_ENOUGHT_NUMBER();
	return(shorspan);
}

int		Span::longestSpan()
{
	int longspan;
	std::vector<int>::iterator ptri; 
	std::vector<int>::iterator ptrj;
	
	if(!vec.empty() && vec.size() != 1)
	{
		ptri = vec.begin();
		ptrj = ptri + 1;
		longspan = abs(*ptri - *ptrj);
		
		while (ptri != vec.end())
		{
			ptrj = ptri + 1;
			while (ptrj != vec.end())
			{
				if(abs(*ptri - *ptrj) > longspan)
					longspan = abs(*ptri - *ptrj);
				ptrj++;
			}
			ptri++;
		}
	}
	else
		throw NOT_ENOUGHT_NUMBER();
	return (longspan);
}

//EXCEPTION 

const char * Span::NOT_ENOUGHT_NUMBER::what() const throw()
{
	return("Error : Not enought number stored");
}

const char * Span::TOO_MUCH_NUMBER::what() const throw()
{
	return("Error : Too much number stored, cannot add anymore");
}