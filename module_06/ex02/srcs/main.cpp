/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:56:59 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/19 15:34:27 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <stdlib.h>

Base *generate(void)
{
	time_t t;
	
	srand((unsigned) time(&t));
	int nbr = 1 + (rand() % 100);
	std::cout << "nbr value = " << nbr << std::endl;
	if(nbr <= 33)
	{
		A *p = new A();
		return(static_cast<Base *>(p));
	}
	if(nbr > 33 && nbr <= 66)
	{
		B *p = new B();
		return(static_cast<Base *>(p));
	}
	if(nbr > 66)
	{
		C *p = new C();
		return(static_cast<Base *>(p));
	}
	else return(NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
	{
		std::cout << "It s an A class Object" << std::endl;
	}
	if (dynamic_cast<B*>(p))
	{
		std::cout << "It s an B class Object" << std::endl;
	}
	if (dynamic_cast<C*>(p))
	{
		std::cout << "It s an C class Object" << std::endl;
	}
	if(!p)
		std::cout << "Type not identified" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A & ref = dynamic_cast<A&>(p);
		(void) ref;
		std::cout << "It s an A class Object" << std::endl;	
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B & ref = dynamic_cast<B&>(p);
		(void) ref;
		std::cout << "It s an B class Object" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		C & ref = dynamic_cast<C&>(p);
		(void) ref;
		std::cout << "It s an C class Object" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main()
{
	Base* ptrbase = generate();
	
	
	identify(ptrbase);
	identify(*ptrbase);

	identify(NULL);
	
	delete ptrbase;
	return (0);
}
