/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DetectType.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:31:48 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/17 11:07:22 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DETECTTYPE_HPP
#define DETECTTYPE_HPP

# include <iostream>
# include <string>
# include <cctype>
# include <stdlib.h>
# include <limits.h>
# include <float.h>

# define CHAR 0
# define INT 1
# define FLOAT 2
# define DOUBLE 3
# define SPECIAL_CASE 4

class TYPE_NOT_DETECTED : public std::exception
{
	const char* what() const throw() {
		return("Error the type was not detected");}
};

bool	ft_is_char(std::string str);
bool	ft_is_int(std::string str);
bool	ft_is_float(std::string str);
bool	ft_is_double(std::string str);
void	del_zero(char *str, int i);
int		detect_type(std::string str);

#endif 