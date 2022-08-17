/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:24:33 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/17 11:53:34 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <exception>
#include "DetectType.hpp"
#include "ConvertType.hpp"

/*TODO 

	- Detect the type of litteral passed as parameter
	- then Conver it to its actual type
	- convert it to the three other data type.
	- Display the result
*/

int main(int ac, char **av)
{
	if (ac == 2)
	{
			int type = -1;
			std::string str(av[1]);
			if(convert_special_case(str))
				return (0);
			try
			{
				type = detect_type(str);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
				return (-1);
			}
			switch (type)
			{
				case CHAR :
					convert_to_char(str);
					break;
				case INT :
					convert_to_int(str);
					break;
				case FLOAT :
					convert_to_float(str);
					break;
				case DOUBLE :
					convert_to_double(str);
					break;
			}
	}
	else
		std::cout << "Error : wrong number of arguments" << std::endl; 
	return (0);
}