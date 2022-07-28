/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 10:55:52 by nburat-d          #+#    #+#             */
/*   Updated: 2022/07/28 14:42:36 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;
	if(ac == 2)
		harl.complain(av[1]);
	else
		std::cout << "Seems that you forgot arguments" << std::endl;
	return (0);
}