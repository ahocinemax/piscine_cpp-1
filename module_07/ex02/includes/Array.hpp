/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 09:58:30 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/19 16:04:49 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <exception>
# include <iostream>
# include <string.h>

template <typename T>
class Array
{
	private :
		T	*_array;
		int	_size;
		
	public :
		Array(); 
		Array(unsigned int n);
		Array(const Array &src); // Construction by copy and assignment operator. In both cases, modifying either the original array or its copy after copying musn’t affect the other array
		Array &operator=(const Array &rhs); // You MUST use the operator new[] to allocate memory
		T &operator[](unsigned int i); // When accessing an element with the [ ] operator, if its index is out of bounds, an std::exception is thrown.
		
		int& size() const; 

		class OUT_OF_BOUND : virtual public std::exception
		{
			const char* what() {return("Error : out of bound");}
		};
};

#endif
