/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DetectType.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:31:48 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/14 19:20:51 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DETECTTYPE_HPP
#define DETECTTYPE_HPP

# include <iostream>
# include <string>
# include <cctype>

class TYPE_NOT_DETECTED : public std::exception
{
	const char* what() const throw() {std::cout << "Error the type was not detected" << std::endl;}
};

int	detect_type(std::string str) throw();
bool	ft_is_char(std::string str);
bool	ft_is_int(std::string str);
bool	ft_is_float(std::string str);
bool	ft_is_double(std::string str);
void	del_zero(char *str, int i)


#endif 