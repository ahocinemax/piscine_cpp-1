/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 20:10:02 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/08 11:36:49 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;


class Bureaucrat
{
	private :
		const std::string	_name;
		int					_grade;

	public :
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat & src);
		Bureaucrat & operator=(const Bureaucrat & rhs);
		~Bureaucrat();

		const std::string& getName() const;
		const int& getGrade() const;
		void incrementGrade();
		void decrementGrade();
		void signForm(Form& form);

		
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
};

std::ostream & operator<<(std::ostream &stream, const Bureaucrat & bureaucrat);

#endif