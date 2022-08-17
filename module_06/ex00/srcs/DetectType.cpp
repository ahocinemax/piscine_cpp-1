/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DetectType.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:30:56 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/17 11:43:30 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DetectType.hpp"

int	detect_type(std::string str)
{
	int	i = 0;
	bool	(*f[4])(std::string) = {&ft_is_char, &ft_is_int, &ft_is_float, &ft_is_double};
	
	while(i < 4)
	{
		if(f[i](str))
			break;
		i++;
	}
	if (i == 4)
		throw TYPE_NOT_DETECTED();
	return (i);
}

bool ft_is_char(std::string str)
{
	if(str.length() == 1 && !isdigit(str[0]))
		return (true);
	else
		return(false);
}

bool	ft_is_int(std::string str)
{
	int i = 0; 
	
	while (str[i] == '+' || str[i] == '-')
		i++;
	while(str[i])
	{
		if(!isdigit(str[i]))
			return(false);
		i++;
	}
	return(true);
}

bool ft_is_float(std::string str)
{
	int i = 0;
	int point_count = 0;

	while (str[i]&& (str[i] == '+' || str[i] == '-')) 
		i++;
	while (str[i] && (isdigit(str[i]) || str[i] == '.'))
	{
		if(str[i] == '.')
			point_count++;
		i++;
	}
	// if(str[i] && str[i] == '.')
	// 	i++;
	// else
	// 	return(false);
	// while (str[i] && isdigit(str[i]))
	// 	i++;
	if(str[i] && str[str.length() - 1] == 'f' && isdigit(str[i - 1]) && point_count < 2)
		return (true);
	else
		return (false);
	
}

bool ft_is_double(std::string str)
{
	int i = 0;

	while (str[i]&& (str[i] == '+' || str[i] == '-')) 
		i++;
	while (str[i] && isdigit(str[i]))
		i++;
	if(str[i] && str[i] == '.')
		i++;
	else
		return(false);
	while (str[i])
	{
		if(!isdigit(str[i]))
			return(false);
		i++;
	}
	if(str[str.length() -1] == '.')
		return (false);
	return (true);
}