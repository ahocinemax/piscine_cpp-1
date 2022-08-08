/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 09:49:16 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/08 11:36:16 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

# define SIGNED 1
# define NOT_SIGNED 0

class Bureaucrat;


class Form
{
	private :
		const std::string	_name;
		bool				_status;
		const int			_grade_to_sign;
		const int			_grade_to_exec;
	public :
		Form(std::string name, int grade_to_sign, int grade_to_exec);
		Form(const Form & src);
		Form & operator=(const Form & rhs);
		~Form();
		
		const std::string&	getName() const;
		const int&			getGradeSign() const;
		const int&			getGradeExec() const;
		void				beSigned(const Bureaucrat& bureaucrat);

		class GradeTooHighException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
		class AlreadySigned : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
};

std::ostream & operator<<(std::ostream &stream, const Form & form);

#endif