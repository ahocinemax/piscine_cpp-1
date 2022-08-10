/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 09:49:16 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/09 16:36:19 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

# include <string>
# include <iostream>
# include <fstream>
# include <stdlib.h>
# include "Bureaucrat.hpp"

# define SIGNED 1
# define NOT_SIGNED 0

class Bureaucrat;


class AForm
{
	private :
		const std::string	_name;
		bool				_status;
		const int			_grade_to_sign;
		const int			_grade_to_exec;
	public :
		AForm(std::string name, int grade_to_sign, int grade_to_exec);
		AForm(const AForm & src);
		AForm & operator=(const AForm & rhs);
		virtual ~AForm();
		
		const std::string&	getName() const;
		const int&			getGradeSign() const;
		const int&			getGradeExec() const;
		bool	checkSignRequirement(const Bureaucrat & bureaucrat, const AForm & form) const;
		bool	checkExecRequirement(const Bureaucrat & bureaucrat, const AForm & form) const;
		void		beSigned(const Bureaucrat& bureaucrat);
		virtual void	execute(Bureaucrat const & executor) const = 0;
		

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
		class NotSignedYet : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
};

std::ostream & operator<<(std::ostream &stream, const AForm & form);

#endif