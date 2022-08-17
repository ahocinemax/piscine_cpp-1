/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:09:47 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/17 14:29:28 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return(reinterpret_cast<Data*>(raw));
}

int main()
{

	Data objct(15);
	std::cout << "Serialization" << std::endl;
	std::cout << "Value before deserialization : " << objct.getValue() << std::endl;
	
	uintptr_t ptr = serialize(&objct);
	std::cout << "Serialization : " << ptr << std::endl;
	
	std::cout << std::endl;
	std::cout << "Deserialization" << std::endl;
	Data * restore = deserialize(ptr);
	std::cout << "Value after deserialization : " << restore->getValue() << std::endl;
	
	return (0);
}