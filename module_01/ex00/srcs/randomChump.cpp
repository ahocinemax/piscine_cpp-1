/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:07:08 by nburat-d          #+#    #+#             */
/*   Updated: 2022/07/29 11:07:09 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include " Zombie.hpp"

void randomChump(std::string name)
{
	Zombie zomb(name);
	
	zomb.announce();
}