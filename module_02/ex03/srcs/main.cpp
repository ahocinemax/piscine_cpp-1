/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:00:59 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/11 10:41:28 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"
#include "bsp.hpp"

int main( void )
{
	std::cout << "-------SHOULD BE INSIDE TRIANGLE-------" << std::endl;
	Point a(0,0);
	Point b(10,0);
	Point c(0,10);
	Point p(5,2);

	if(bsp(a, b, c, p) && !isOnEdge(a, b, c, p))
		std::cout << "Point is inside the triangle" << std::endl;
	else
		std::cout << "Point is outside the triangle" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "-------SHOULD BE ON THE EDGE OF TRIANGLE-------" << std::endl;
	Point d(0,0);
	Point e(10,0);
	Point f(0,10);
	Point p2(8,0);

	if(bsp(d, e, f, p2) && !isOnEdge(d, e, f, p2))
		std::cout << "Point is inside the triangle" << std::endl;
	else
		std::cout << "Point is outside the triangle" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "-------SHOULD BE OUTSIDE OF TRIANGLE-------" << std::endl;
	Point g(0,0);
	Point h(10,0);
	Point i(0,10);
	Point p3(11,0);

	if(bsp(g, h, i, p3) && !isOnEdge(g, h, i, p3))
		std::cout << "Point is inside the triangle" << std::endl;
	else
		std::cout << "Point is outside the triangle" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	return 0;
}