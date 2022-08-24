/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 09:57:34 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/24 10:19:54 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <array>

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
	std::array<int> arr (1, 2, 3, 4);
	
	return (0);
}