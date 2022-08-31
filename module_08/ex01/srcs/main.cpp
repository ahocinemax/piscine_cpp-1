/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 22:06:10 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/31 11:12:51 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Span.hpp>

int main()
{
	Span sp = Span(20);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::vector<int>::iterator _beg = sp.getVector().begin();
	std::vector<int>::iterator _end = sp.getVector().end();
	std::cout <<  "Span content : " << std::endl;
	sp.printSpan();
	try
	{
		std::cout << std::endl;
		std::cout << "The shortest span = " << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << std::endl;
		std::cout <<  "The longest span = " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << std::endl;
		std::cout <<  "Adding 42 to the span" << std::endl;
		sp.addNumber(42);
		sp.printSpan();	
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	_beg = sp.getVector().begin();
	_end = sp.getVector().end();
	try
	{
		std::cout << std::endl << "filling span" << std::endl;
		sp.fillSpan(_beg, _end);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	sp.printSpan();	
	return 0;
}