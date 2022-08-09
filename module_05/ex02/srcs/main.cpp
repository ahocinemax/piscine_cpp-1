/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 23:43:27 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/09 16:47:33 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form28B.hpp"

int main()
{
	Bureaucrat boss("Elon", 1);
	std::cout << boss;
	Bureaucrat sousfifre("Paul",150);
	std::cout << sousfifre;
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "----SHRUBBERYCREATIONFORM TEST-----"<< std::endl;
	ShrubberyCreationForm formShub("TREE");
	std::cout << formShub;
	boss.executeForm(formShub);
	boss.signForm(formShub);
	boss.executeForm(formShub);
	sousfifre.signForm(formShub);
	sousfifre.executeForm(formShub);
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "----ROBOTOMYREQUESTFORM TEST-----"<< std::endl;
	RobotomyRequestForm  formRobot("Population");
	std::cout << formRobot;
	boss.executeForm(formRobot);
	boss.signForm(formRobot);
	boss.executeForm(formRobot);
	sousfifre.signForm(formRobot);
	sousfifre.executeForm(formRobot);
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "----PRESIDENTIALPARDONFORM TEST-----"<< std::endl;
	PresidentialPardonForm formPrez("Nobody");
	std::cout << formPrez;
	boss.executeForm(formPrez);
	boss.signForm(formPrez);
	boss.executeForm(formPrez);
	sousfifre.signForm(formPrez);
	sousfifre.executeForm(formPrez);
	return (0);
}