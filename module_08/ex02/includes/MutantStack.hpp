/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:37:31 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/28 12:14:21 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
# include <list>


/*
TODO
	Need to heritate from stack template class
	From this class, expose the underlying container's iterator to use its functions members
*/

template <typename T>
class MutantStack : public std::stack<T>
{
	public :
		typedef typename std::stack<T>::container_type::iterator iterator;
	
		MutantStack();
		MutantStack(const MutantStack<T>& src);
		MutantStack<T>& operator=(const MutantStack<T>& rhs);
		~MutantStack();
		
		iterator begin();
		iterator end();
};

template <typename T>  MutantStack<T>::MutantStack()
{
}

template <typename T> MutantStack<T>::MutantStack(const MutantStack<T>& src) : std::stack<T>(src)
{
}

template <typename T> MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& rhs)
{
	if(this != rhs)
		*this->c = rhs.c;
	return (*this);
}

template <typename T> MutantStack<T>::~MutantStack()
{
}

template <typename T> typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return(this->c.begin());
}

template <typename T> typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return(this->c.end());	
}

#endif