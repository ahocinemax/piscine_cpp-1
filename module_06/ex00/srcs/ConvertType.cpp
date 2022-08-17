/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertType.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:35:22 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/17 11:28:45 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConvertType.hpp"


bool	convert_special_case(std::string str)
{
	if(str == "+inf" || str == "-inf" || str == "+inff" || str == "-inff")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << str[0] << "inff" << std::endl;
		std::cout << "double : " << str[0] << "inf" << std::endl;
		return (1);
	}
	if(str == "nan" || str == "nanf")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << "nanf" << std::endl;
		std::cout << "double : " << "nan" << std::endl;
		return (1);
	}
	return (0);
}

void	convert_to_char(std::string str)
{
	std::cout << "char : " << static_cast<char>(str[0]) << std::endl;
	std::cout << "int : " << static_cast<int>(str[0]) << std::endl;
	std::cout << "float : " << static_cast<float>(str[0]) << ".0f" << std::endl;
	std::cout << "double : " << static_cast<double>(str[0])  << ".0" << std::endl;
}

void convert_to_int(std::string str)
{
	double nbr = strtod(str.c_str(), NULL);

	if (nbr < 33 || nbr > 126)
		std::cout << "char : non displayable" << std::endl;
	else
		std::cout << "char : " << static_cast<char>(nbr) << std::endl;
	if(nbr > INT_MAX || nbr < INT_MIN)
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(nbr) << std::endl;
	if(nbr < FLT_MIN || nbr > FLT_MAX)
		std::cout << "float : impossible" << std::endl;
	else
		std::cout << "float : " << static_cast<float>(nbr) << ".0f" << std::endl;
	std::cout << "double : " << static_cast<double>(nbr)  << ".0" << std::endl;		
}

void convert_to_float(std::string str)
{
	double nbr = strtod(str.c_str(), NULL);

	if (nbr < 33 || nbr > 126)
		std::cout << "char : non displayable" << std::endl;
	else
		std::cout << "char : " << static_cast<char>(nbr) << std::endl;
	if(nbr > INT_MAX || nbr < INT_MIN)
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(nbr) << std::endl;
	if(nbr < FLT_MIN || nbr > FLT_MAX)
	{
		std::cout << "float : impossible" << std::endl;
		std::cout << "double : " << static_cast<double>(nbr) << std::endl;
	}
	else if ((nbr == 0 || static_cast<float>(nbr) / static_cast<int>(nbr) == 1) && nbr > 1000000 && nbr < -1000000)
	{
		std::cout << "float : " << static_cast<float>(nbr) << ".0f" << std::endl;
		std::cout << "double : " << static_cast<double>(nbr)  << ".0" << std::endl;
	}
	else
	{
		std::cout << "float : " << nbr << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(nbr) << std::endl;
	}
}

void convert_to_double(std::string str)
{
	double nbr = strtod(str.c_str(), NULL);

	if (nbr < 33 || nbr > 126)
		std::cout << "char : non displayable" << std::endl;
	else
		std::cout << "char : " << static_cast<char>(nbr) << std::endl;
	if(nbr > INT_MAX || nbr < INT_MIN)
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(nbr) << std::endl;
	if(nbr < FLT_MIN || nbr > FLT_MAX)
	{
		std::cout << "float : impossible" << std::endl;
		std::cout << "double : " << static_cast<double>(nbr) << std::endl;
	}
	else if ((nbr == 0 || static_cast<float>(nbr) / static_cast<int>(nbr) == 1) && nbr > 1000000 && nbr < -1000000)
	{
		std::cout << "float : " << static_cast<float>(nbr) << ".0f" << std::endl;
		std::cout << "double : " << nbr << ".0" << std::endl;
	}
	else
	{
		std::cout << "float : " << static_cast<float>(nbr) << "f" << std::endl;
		std::cout << "double : " << nbr << std::endl;
	}
}