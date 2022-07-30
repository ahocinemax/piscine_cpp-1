/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:07:05 by nburat-d          #+#    #+#             */
/*   Updated: 2022/07/29 11:07:06 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include " Zombie.hpp"

Zombie* newZombie( std::string name )
{

	Zombie *zomb = new Zombie(name);
	return(zomb);
}