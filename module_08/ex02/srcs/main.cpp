/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:29:23 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/28 13:54:52 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;

	std::cout << "-----------Default Stack------------- " << std::endl;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	std::cout << "-----------Assignment Stack------------- " << std::endl;

	MutantStack<int> dup = mstack;

	MutantStack<int>::iterator dit = dup.begin();
	MutantStack<int>::iterator dite = dup.end();

	while (dit != dite)
	{
		std::cout << "value dit  =" << *dit << std::endl;
		dit++;
	}

	std::cout << "-----------Pop from default Stack------------- " << std::endl;
	mstack.pop();
	it = mstack.begin();
	ite = mstack.end();
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::cout << "-----------Assignment Stack after poping------------- " << std::endl;
	
	dit = dup.begin();
	dite = dup.end();
	while (dit != dite)
	{
		std::cout << "value dit  =" << *dit << std::endl;
		dit++;
	}
	
	return 0;
	
}

// int main()
// {
// 	std::list<int> mstack;
	
// 	mstack.push_front(5);
// 	mstack.push_front(17);
// 	std::cout << mstack.front() << std::endl;
// 	mstack.pop_front();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push_back(3);
// 	mstack.push_back(5);
// 	mstack.push_back(737);
// 	//[...]
// 	mstack.push_back(0);
// 	std::list<int>::iterator it = mstack.begin();
// 	std::list<int>::iterator ite = mstack.end();
// 	it++;
// 	it--;
	
// 	while (it != ite)
// 	{
// 	std::cout << *it << std::endl;
// 	++it;
// 	}
// //	std::stack<int> s(mstack);
// 	return 0;
// }