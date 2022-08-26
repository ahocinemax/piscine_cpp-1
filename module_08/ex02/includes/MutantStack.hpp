/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:37:31 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/26 10:40:15 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include "stack"
# include "iostream"


/*
TODO

	- Iterator are pointer to an element. It allows to go, for some, back and 
	forth into the element list, in our case, the stack of <T> elements.

What is needed :
	> Pointer to an element
	> overloading operator++ / operator--

OPTIONNAL :
	> implement the "operator->"
*/

template <typename T>
class MutantStack
{
	private :

	public :
		MutantStack();
		MutantStack(const MutantStack & src);
		MutantStack & operator=(const MutantStack & rhs);
		~MutantStack();

		void			push(T& item);
		void			pop(T& item);
		T&				top();
		unsigned int	size();
		
		class iterator
		{
			private :
		
			public :
				iterator();
				iterator(const iterator & src);
				iterator & operator=(const iterator & rhs);
				~iterator();

				T*	begin();
				
		};
		
		#endif
};

#endif