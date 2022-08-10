/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:02:30 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/10 10:32:46 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

# include "Form28B.hpp"

class Intern
{
	private :

	public :
		Intern();
		Intern(const Intern & src);
		Intern & operator=(const Intern & rhs);
		~Intern();

		AForm* makeForm(std::string name, std::string target);
		AForm* makeShubberyForm(std::string target);
		AForm* makeRobotomyForm(std::string target);
		AForm* makePresidentialForm(std::string target);
		class NoMatchingForm : virtual public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
};

#endif