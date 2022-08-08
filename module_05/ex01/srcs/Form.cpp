/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 09:48:33 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/08 13:57:21 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int grade_to_sign, int grade_to_exec)
: _name(name), _status(NOT_SIGNED), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec)
{
	if(_grade_to_sign > 150)
		throw Form::GradeTooLowException();
	else if (_grade_to_sign < 1)
		throw Form::GradeTooHighException();
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const Form & src)
: _name("No name"), _status(NOT_SIGNED), _grade_to_sign(1), _grade_to_exec(1)
{
	if(this != &src)
		*this = src;
	std::cout << "Form copy constructor called" << std::endl;
}

Form & Form::operator=(const Form & rhs)
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
	std::cout << "Form assignment constructor called" << std::endl;
	return(*this);
}

Form::~Form()
{
	std::cout << "Form default destructor called" << std::endl;
}

// GETTERS

const std::string& Form::getName() const
{
	return (_name);
}

const int& Form::getGradeSign() const
{
	return (_grade_to_sign);
}

const int& Form::getGradeExec() const
{
	return (_grade_to_exec);
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (this->_status == SIGNED)
		throw Form::AlreadySigned();
	if (bureaucrat.getGrade() > this->_grade_to_sign)
		throw Form::GradeTooLowException();
	else
	{
		this->_status = SIGNED;
		std::cout << bureaucrat.getName() << " signed " << this->getName() << std::endl;
	}
}

//EXCEPTION

const char * Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char * Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char * Form::AlreadySigned::what() const throw()
{
	return ("The form is already signed");
}

//OVERLOAD 

std::ostream & operator<<(std::ostream &stream, const Form & form)
{
	stream << form.getName() << ", Form grade to sign : " << form.getGradeSign() << ", Form grade to execute : " << form.getGradeExec()<< std::endl;
	return stream;
}