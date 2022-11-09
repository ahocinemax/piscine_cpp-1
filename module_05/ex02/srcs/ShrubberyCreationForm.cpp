/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 15:32:46 by nburat-d          #+#    #+#             */
/*   Updated: 2022/11/09 14:43:50 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :  AForm("ShrubberyCreationForm", 145, 137), _target("NO_NAME")
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & src) : AForm(src)
{	
	if(this != &src)
		*this = src;
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs)
{
	if(this != &rhs)
	{
		this->AForm::operator=(rhs);
		_target = rhs._target;
	}
	std::cout << "ShrubberyCreationForm assignment constructor called" << std::endl;
	return (*this);
	
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm default destructor called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->checkExecRequirement(executor, *this))
		throw ;
	std::string filename = _target + "_shrubbery";
	std::ofstream file(filename.c_str());
	file << "       _-_"  << std::endl;
	file << "    /~~   ~~\\"  << std::endl;
	file << " /~~         ~~\\"  << std::endl;
	file << "{               }"  << std::endl;
	file << "\\  _-     -_  /"  << std::endl;
	file << "   ~  \\ //  ~"  << std::endl;
	file << "_- -   | | _- _"  << std::endl;
	file << "  _ -  | |   -_"  << std::endl;
	file << "      // \\"  << std::endl;
	file.close();
	std::cout << executor.getName() << " execute " << this->getName() << std::endl;
}