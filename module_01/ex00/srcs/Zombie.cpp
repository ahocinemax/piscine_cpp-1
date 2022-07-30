/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:07:11 by nburat-d          #+#    #+#             */
/*   Updated: 2022/07/29 11:07:12 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include " Zombie.hpp"

Zombie::Zombie(std::string name){
	_name = name;
}

Zombie::~Zombie(void){
	std::cout << _name << ": Destructor called" << std::endl;
}

void Zombie::announce(void){
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl; 
}

std::string Zombie::getName(void) const{
	return (_name);
}

void Zombie::setName(std::string name){
	_name = name;
}