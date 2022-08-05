/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 21:05:11 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/04 21:05:12 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	int k = 0;
	const A_Animal* j = new Dog();
	const A_Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	// A_Animal anil = new A_Animal();

	A_Animal * arrayA_Animal[4];
	while (k < 2)
	{
		arrayA_Animal[k] = new Dog();
		k++;
	}
	while (k < 4)
	{
		arrayA_Animal[k] = new Cat();
		k++;
	}
	k = 0;
	while (k < 4)
	{
		std::cout << "A_Animal : " << arrayA_Animal[k]->getType() << std::endl;
		arrayA_Animal[k]->makeSound();
		k++;
	}
	k = 0;
	while(k < 4)
	{
		delete arrayA_Animal[k];
		k++;
	}
	
	Cat chat_vnr;
	{
		Cat tmp = chat_vnr;
	}
	Dog chien_vnr;
	{
		Dog tmp = chien_vnr;
	}

	return 0;
}