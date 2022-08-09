/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:34:03 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/09 16:35:11 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), _target("NO_NAME")
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & src) : AForm(src)
{
	if(this != &src)
		*this = src;
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs)
{
	if(this != &rhs)
	{
		*this = rhs;
		_target = rhs._target;
	}
	std::cout << "Robotomy RequestForm assignment constructor called" << std::endl;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm default destructor called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->checkExecRequirement(executor, *this))
		throw ;
	std::cout << executor.getName() << " execute " << this->getName() << std::endl;
	if(rand() % 100 > 50)
		std::cout << this->_target << "has been robotomized successfully" << std::endl;
	else
		std::cout << "The robotomy failed" << std::endl;
}