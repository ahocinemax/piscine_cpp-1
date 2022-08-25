/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 21:05:31 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/25 12:10:05 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <iterator>
# include <exception>
# include <math.h>

class Span
{
	private :
		std::vector<int>	vec;
		unsigned int		_maxStorage;

	public :
		Span(unsigned int n);
		Span(const Span & src);
		Span & operator=(const Span & rhs);
		~Span();
		
		void	addNumber(int nbr);
		int		shortestSpan();
		int		longestSpan();
		void	fillSpan(std::vector<int>::iterator _begin, std::vector<int>::iterator _end);
		void	printSpan();
		std::vector<int>& getVector();

	class NOT_ENOUGHT_NUMBER : virtual public std::exception
	{
		virtual const char * what() const throw();
	};
	class TOO_MUCH_NUMBER : virtual public std::exception
	{
		virtual const char * what() const throw();
	};
};

#endif