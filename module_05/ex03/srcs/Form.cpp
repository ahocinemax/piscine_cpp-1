/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 09:48:33 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/09 16:41:15 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

AForm::AForm(std::string name, int grade_to_sign, int grade_to_exec)
: _name(name), _status(NOT_SIGNED), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec)
{
	if(_grade_to_sign > 150)
		throw AForm::GradeTooLowException();
	else if (_grade_to_sign < 1)
		throw AForm::GradeTooHighException();
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(const AForm & src)
: _name("No name"), _status(NOT_SIGNED), _grade_to_sign(1), _grade_to_exec(1)
{
	if(this != &src)
		*this = src;
	std::cout << "AForm copy constructor called" << std::endl;
}

AForm & AForm::operator=(const AForm & rhs)
{
	if(this != &rhs)
	{
		std::string * ptr_name = const_cast<std::string*>(&this->_name);
		*ptr_name = rhs._name;
		_status = rhs._status;
		int *ptr_grade_to_sign = const_cast<int*>(&this->_grade_to_sign);
		*ptr_grade_to_sign = rhs._grade_to_sign;
		int *ptr_grade_to_exec = const_cast<int*>(&this->_grade_to_exec);
		*ptr_grade_to_exec = rhs._grade_to_exec;
	}
	std::cout << "AForm assignment constructor called" << std::endl;
	return(*this);
}

AForm::~AForm()
{
	std::cout << "AForm default destructor called" << std::endl;
}



// GETTERS

const std::string& AForm::getName() const
{
	return (_name);
}

const int& AForm::getGradeSign() const
{
	return (_grade_to_sign);
}

const int& AForm::getGradeExec() const
{
	return (_grade_to_exec);
}

bool AForm::checkSignRequirement(const Bureaucrat & bureaucrat, const AForm & form) const
{
	if (form._status == SIGNED)
		throw AForm::AlreadySigned();
	if (bureaucrat.getGrade() > form.getGradeSign())
		throw AForm::GradeTooLowException();
	return (1);
}

bool AForm::checkExecRequirement(const Bureaucrat & bureaucrat, const AForm & form) const
{
	if (form._status != SIGNED)
		throw AForm::NotSignedYet();
	if (bureaucrat.getGrade() > form.getGradeExec())
		throw AForm::GradeTooLowException();
	return (1);
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (this->_status == SIGNED)
		throw AForm::AlreadySigned();
	if (bureaucrat.getGrade() > this->_grade_to_sign)
		throw AForm::GradeTooLowException();
	else
	{
		this->_status = SIGNED;
		std::cout << bureaucrat.getName() << " signed " << this->getName() << std::endl;
	}
}

//EXCEPTION

const char * AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char * AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char * AForm::AlreadySigned::what() const throw()
{	
	return ("The Form is already signed");
}

const char * AForm::NotSignedYet::what() const throw()
{
	return ("The Form is not signed yet. Thus, cannot be executed");
}

//OVERLOAD 

std::ostream & operator<<(std::ostream &stream, const AForm & aform)
{
	stream << aform.getName() << ", Form grade to sign : " << aform.getGradeSign() << ", Form grade to execute : " << aform.getGradeExec()<< std::endl;
	return stream;
}