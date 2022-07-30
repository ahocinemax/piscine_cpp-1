/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:07:33 by nburat-d          #+#    #+#             */
/*   Updated: 2022/07/29 11:07:34 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include " Zombie.hpp"

Zombie::Zombie(void){
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