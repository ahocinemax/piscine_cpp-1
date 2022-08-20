/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 12:52:45 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/19 16:05:40 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T> Array<T>::Array() // create an empty array
{
	T *_array = new T[0];
	_array[0] = '\0';
	_size = 0;
}

template <typename T> Array<T>::Array(unsigned int n) // create array of n elements initialized by default
{
	T *_array = new T[n];
	for(int i = 0; i < n; i++)
	{
		_array[i] = 0
	}
	_size = n;
}

template <typename T> Array<T>::Array(const Array &src)
{
	if(this != &src)
	{
		_array = new T[src._size];
		for(int i = 0; i < src._size; i++)
		{
			_array[i] = memcpy(src._array[i]);
		}
		_size = src._size;
	}
}