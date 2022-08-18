/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 11:31:47 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/18 12:00:45 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.hpp"
#include "min.hpp"
#include "max.hpp"
#include <iostream>

int main()
{
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	

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

	char e, f;

	e = 'z'; 
	f = 'a';

	std::cout << "---------------Before swaping---------------" << std::endl;
	std::cout << "E = " << e << std::endl;
	std::cout << "F = " << f << std::endl;
	std::cout << "Minium = " << min<char>(e, f) << std::endl;
	std::cout << "Maximum = " << max<char>(e, f) << std::endl;
	swap<char>(e, f);
	std::cout << "---------------After swaping---------------" << std::endl;
	std::cout << "E = " << c << std::endl;
	std::cout << "F = " << d << std::endl;


	return (0);
}