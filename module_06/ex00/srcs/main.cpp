/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:24:33 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/14 18:54:34 by nburat-d         ###   ########.fr       */
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
			try
			{
				type = detect_type(str);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
				return (-1);
			}
			switch (type)
			{
				case 0 :
					convert_to_char(str);
				case 1 :
					convert_to_int(str);
				case 2 :
					convert_to_float(str);
				case 3 :
					convert_to_double(str);
				case 4 :
					convert_non_displayable(str);
					break;
			}
		
			
			
	}
	else
		std::cout << "Error : Missing parameter" << std::endl; 
	return (0);
}