/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:55:56 by nburat-d          #+#    #+#             */
/*   Updated: 2022/07/28 10:56:00 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {}

Harl::~Harl(void) {}

void Harl::debug(void)
{
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" 
	<< std::endl;
}

void Harl::info(void)
{
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" 
	<< std::endl;
}

void Harl::warning(void)
{
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month."
	<< std::endl;
}

void Harl::error(void)
{
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." 
	<< std::endl;
}

void Harl::complain(std::string level)
{
	int i = 0;
	void	(Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	while ( i < 4 && level != str[i])
		i++;
	if (i == 4)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return ;
	}
	while (i < 4)
	{
		(this->*f[i])();
		std::cout << std::endl;
		i++;
	}
}