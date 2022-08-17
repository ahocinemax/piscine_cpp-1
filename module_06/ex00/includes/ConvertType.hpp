/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvertType.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:36:25 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/17 11:06:48 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTTYPE_HPP
#define CONVERTTYPE_HPP

# include <iostream>
# include <string>
# include <stdlib.h>
# include <limits.h>
# include <float.h>


bool	convert_special_case(std::string str);
void	convert_to_char(std::string str);
void	convert_to_int(std::string str);
void	convert_to_float(std::string str);
void	convert_to_double(std::string str);

#endif