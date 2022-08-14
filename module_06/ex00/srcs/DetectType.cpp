/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DetectType.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:30:56 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/14 19:29:00 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DetectType.hpp"

int	detect_type(std::string str) throw()
{
	int	i = 0;
	int	(*f[4])(std::string) = {&ft_is_char, &ft_is_int, &ft_is_float, &ft_is_double};
	
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
	int i = 0;
	
	if(str.length() == 0)
		return (false);
	else
	{
		if (str.length() == 1 && isalpha(str[i]) > 0)
			return(true);
		while (str[i] && str[i] != ' ')
		{
			if (!isalpha(str[i]))
				return (false);
		}
		
	}
	
}

bool	ft_is_int(std::string str)
{
	int	i = 0;
	
	if (str[i] == '-' || str[i] == '+')
		i++;
	del_zero(str, i);
	while (str[i])
		if (ft_isdigit(str[i++]) == 0)
			return (0);
	if (ft_strlen(str) < 10)
		return (1);
	if (ft_strlen (str) > 11)
		return (0);
	if (ft_strlen (str) == 10)
		if (ft_strcmp("2147483647", str) < 0)
			return (0);
	if (ft_strlen(str) == 11)
		if (ft_strcmp("-2147483648", str) < 0)
			return (0);
	return (1);
}

bool ft_is_float(std::string str)
{
	
}

bool ft_is_double(std::string str)
{
	
}

