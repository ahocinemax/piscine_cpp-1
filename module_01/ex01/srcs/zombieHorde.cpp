/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:07:35 by nburat-d          #+#    #+#             */
/*   Updated: 2022/07/29 11:07:37 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include " Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if(N <= 0)
		return (NULL);
	Zombie *p_zomb = new Zombie[N];
	for(int i = 0; i < N; i++)
		p_zomb[i].setName(name);
	return (p_zomb);
}