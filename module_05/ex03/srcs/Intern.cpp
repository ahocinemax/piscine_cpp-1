/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:02:57 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/10 11:02:25 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern & src)
{
	(void)src;
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern & Intern::operator=(const Intern & rhs)
{
	(void)rhs;
	std::cout << "Intern assignment constructor called" << std::endl;
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern default destructor called" << std::endl;
}

AForm* Intern::makeShubberyForm(std::string target)
{
	AForm * form = new ShrubberyCreationForm(target);
	return (form);
}

AForm* Intern::makeRobotomyForm(std::string target)
{
	AForm * form = new RobotomyRequestForm(target);
	return (form);
}

AForm* Intern::makePresidentialForm(std::string target)
{
	AForm * form = new PresidentialPardonForm(target);
	return (form);
}

const char* Intern::NoMatchingForm::what() const throw()
{
	return ("No matching form found");
}

AForm* Intern::makeForm(std::string name, std::string target)
{
	int i = 0;
	AForm * internform;
	AForm* (Intern::*f[3])(std::string) = {&Intern::makeShubberyForm, &Intern::makeRobotomyForm, &Intern::makePresidentialForm };
	std::string formtab[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	try
	{
		while(i < 3)
		{
			if (name == formtab[i])
			{	
				internform = (this->*f[i])(target);
				std::cout << "Intern created " << internform->getName() << std::endl;
				return (internform);
			}
			i++;
		}
		throw Intern::NoMatchingForm();
	}
	catch(std::exception& e)
	{
		std::cerr << "Error :" << name << e.what() << std::endl;
		return (NULL);
	}
}