/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 23:43:27 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/08 13:58:35 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
	Bureaucrat boss("Elon", 1);
	std::cout << boss;
	
	Bureaucrat sousfifre("Paul",150);
	std::cout << sousfifre;

	Form form42("NOC", 25, 60);
	std::cout << form42;
	boss.signForm(form42);
	sousfifre.signForm(form42);

	return (0);
}