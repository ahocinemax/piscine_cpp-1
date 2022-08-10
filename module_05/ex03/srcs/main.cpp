/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 23:43:27 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/10 11:05:46 by nburat-d         ###   ########.fr       */
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
	
	// std::cout << "----SHRUBBERYCREATIONFORM TEST-----"<< std::endl;
	// ShrubberyCreationForm formShub("TREE");
	// std::cout << formShub;
	// boss.executeForm(formShub);
	// boss.signForm(formShub);
	// boss.executeForm(formShub);
	// sousfifre.signForm(formShub);
	// sousfifre.executeForm(formShub);
	// std::cout << std::endl;
	// std::cout << std::endl;
	
	// std::cout << "----ROBOTOMYREQUESTFORM TEST-----"<< std::endl;
	// RobotomyRequestForm  formRobot("Population");
	// std::cout << formRobot;
	// boss.executeForm(formRobot);
	// boss.signForm(formRobot);
	// boss.executeForm(formRobot);
	// sousfifre.signForm(formRobot);
	// sousfifre.executeForm(formRobot);
	// std::cout << std::endl;
	// std::cout << std::endl;
	
	// std::cout << "----PRESIDENTIALPARDONFORM TEST-----"<< std::endl;
	// PresidentialPardonForm formPrez("Nobody");
	// std::cout << formPrez;
	// boss.executeForm(formPrez);
	// boss.signForm(formPrez);
	// boss.executeForm(formPrez);
	// sousfifre.signForm(formPrez);
	// sousfifre.executeForm(formPrez);

	Intern theo;
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "----Intern Shrubberry form TEST-----"<< std::endl;
	AForm *ptr_formshrub = theo.makeForm("shrubbery creation", "home");
	boss.executeForm(*ptr_formshrub);
	boss.signForm(*ptr_formshrub);
	boss.executeForm(*ptr_formshrub);
	
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "----Intern Robotomy form TEST-----"<< std::endl;
	AForm *ptr_formrobot = theo.makeForm("robotomy request", "home");
	boss.executeForm(*ptr_formrobot);
	boss.signForm(*ptr_formrobot);
	boss.executeForm(*ptr_formrobot);
		
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "----Intern Presidential form TEST-----"<< std::endl;
	AForm *ptr_formprez= theo.makeForm("robotomy request", "home");
	boss.executeForm(*ptr_formprez);
	boss.signForm(*ptr_formprez);
	boss.executeForm(*ptr_formprez);

	std::cout << "----Intern Not found form TEST-----"<< std::endl;
	AForm *ptr_formlambda= theo.makeForm("lambda", "home");
	if(ptr_formlambda)
	{
		boss.executeForm(*ptr_formlambda);
		boss.signForm(*ptr_formlambda);
		boss.executeForm(*ptr_formlambda);
	}
	
	delete ptr_formshrub;
	delete ptr_formrobot;
	delete ptr_formprez;
	
	return (0);
}