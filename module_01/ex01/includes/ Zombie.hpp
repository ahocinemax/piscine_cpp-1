/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Zombie.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:07:26 by nburat-d          #+#    #+#             */
/*   Updated: 2022/07/29 11:07:27 by nburat-d         ###   ########.fr       */
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
		Zombie(void);
		~Zombie(void);
		void		announce(void);
		std::string	getName(void) const;
		void		setName(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif