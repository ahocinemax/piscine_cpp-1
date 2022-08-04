/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 09:53:04 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/04 01:01:21 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& src)
{
	if(this != &src)
		*this = src;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& rhs)
{
	if(this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = rhs.ideas[i];
	}
	std::cout << "Brain assignment constructor called" << std::endl;
	return (*this);
}

const std::string & Brain::getIdea(int idea_num) const
{
	return(ideas[idea_num]);
}

Brain::~Brain()
{
	std::cout << "Brain default destructor called" << std::endl;
}

void	 Brain::setIdeas(int rank, std::string idea)
{
	if(rank >=0 && rank < 100)
		ideas[rank] = idea;
	else
		std::cout << "rank should be in a range of 0 to 99" << std::endl;
}