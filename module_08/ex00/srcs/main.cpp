/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 09:57:34 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/24 10:13:21 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>


int main()
{
	std::vector<int> vec (1);
	vec.push_back(6);
	vec.push_back(9);
	vec.push_back(2);
	try
	{
		std::vector<int>::iterator it = Easyfind(vec, 2);
		std::cout << "the number " << *it << " was found" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		std::vector<int>::iterator it = Easyfind(vec, 10);
		std::cout << "the number " << *it << " was found" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	return (0);
}