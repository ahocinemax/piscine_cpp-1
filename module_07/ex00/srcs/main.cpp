/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:31:47 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/18 11:57:23 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.hpp"
#include "min.hpp"
#include "max.hpp"
#include <iostream>

int main()
{
	int a, b;

	a = 15; 
	b = 16;

	std::cout << "---------------Before swaping---------------" << std::endl;
	std::cout << "A = " << a << std::endl;
	std::cout << "B = " << b << std::endl;
	std::cout << "Minium = " << min<int>(a, b) << std::endl;
	std::cout << "Maximum = " << max<int>(a, b) << std::endl;
	swap<int>(a, b);
	std::cout << "---------------After swaping---------------" << std::endl;
	std::cout << "A = " << a << std::endl;
	std::cout << "B = " << b << std::endl;

	char c, d;

	c = 'z'; 
	d = 'a';

	std::cout << "---------------Before swaping---------------" << std::endl;
	std::cout << "C = " << c << std::endl;
	std::cout << "D = " << d << std::endl;
	std::cout << "Minium = " << min<char>(c, d) << std::endl;
	std::cout << "Maximum = " << max<char>(c, d) << std::endl;
	swap<char>(c, d);
	std::cout << "---------------After swaping---------------" << std::endl;
	std::cout << "C = " << c << std::endl;
	std::cout << "D = " << d << std::endl;


	return (0);
}