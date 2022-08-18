/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 13:52:39 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/18 14:29:31 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	addOne(int nbr)
{
	nbr++;
	return(nbr);
}

char	upperCase(char c)
{
	c -= 32;
	return(c);
}

int main()
{
	int nbr[4] = {0, 1, 2, 3};

	iter<int>(nbr, 4, addOne);
	for(int i = 0; i < 4; i++)
	{
		std::cout << nbr[i] << std::endl;
	}

	char chartest[4] = {'a', 'b', 'c', 'd'};

	iter<char>(chartest, 4, upperCase);
	for(int i = 0; i < 4; i++)
	{
		std::cout << chartest[i] << std::endl;
	}
	
	return (0);
}