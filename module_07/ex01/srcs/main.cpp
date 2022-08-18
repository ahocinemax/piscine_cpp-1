/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:52:39 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/18 13:59:15 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	addOne(int nbr)
{
	nbr++;
	return(nbr);
}

int main()
{
	int nbr[4] = {0, 1, 2, 3};

	iter<int>(nbr, 4, addOne);
	for(int i = 0; i < 4; i++)
	{
		std::cout << nbr[i] << std::endl;
	}
	
	return (0);
}