/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Zombie.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:06:56 by nburat-d          #+#    #+#             */
/*   Updated: 2022/07/29 11:06:57 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	private :
		std::string	_name;
	
	public :
		Zombie(std::string name);
		~Zombie(void);
		void		announce(void);
		std::string	getName(void) const;
		void		setName(std::string name);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif