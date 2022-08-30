/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 09:58:30 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/30 15:25:18 by nburat-d         ###   ########.fr       */
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
		unsigned int	_size;
		
	public :
		Array(); 
		Array(unsigned int n);
		Array(const Array<T> &src); 
		Array &operator=(const Array<T> &rhs);
		T &operator[](unsigned int i);
		~Array();
		
		const int& getSize() const;

		class OUT_OF_BOUND : virtual public std::exception
		{
			virtual const char* what() const throw();
		};

};

template <typename T> Array<T>::Array() // create an empty array
{
	_array =  NULL;
	_size = 0;
	std::cout << "Array constructor called" << std::endl;
}

template <typename T> Array<T>::Array(unsigned int n)
{
	if(n != 0)
	{
		_array = new T[n]();
		for(unsigned int i = 0; i < n; i++)
		{
			_array[i] = 0;
		}	
	}
	_size = n;
	std::cout << "Array constructor called" << std::endl;
}

template <typename T> Array<T>::Array(const Array<T> & src)
{
	_array =  NULL;
	if(this != &src)
		*this = src;
	std::cout << "Array copy constructor called" << std::endl;
}

template <typename T> Array<T>& Array<T>::operator=(const Array<T> &rhs)
{
	if(this != &rhs)
	{
		delete [] _array;
		_array = new T[rhs._size];
		for(unsigned int i = 0; i < rhs._size; i++)
		{
			_array[i] = rhs._array[i];
		}
		_size = rhs._size;
	}
	std::cout << "Array assignment constructor called" << std::endl;
	return(*this);
}

template <typename T> Array<T>::~Array()
{
	delete [] _array;
	std::cout << "Array destructor called" << std::endl;
}

template <typename T> const int& Array<T>::getSize() const
{
	return (this->_size);
}

template <typename T> T& Array<T>::operator[](unsigned int i)
{
	if(i >= this->_size)
		throw OUT_OF_BOUND();
	else
		return(this->_array[i]);
}

template <typename T> const char* Array<T>::OUT_OF_BOUND::what() const throw()
{
	return("Error : Out of Array's bound");
}

#endif
