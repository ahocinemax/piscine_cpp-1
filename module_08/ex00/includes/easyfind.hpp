/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 09:04:38 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/31 10:58:21 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <algorithm>
# include <iterator>

class NO_OCCURENCE_FOUND : virtual public std::exception
{
		virtual const char * what() const throw (){return ("Error : No occurrence found");};
};

template <typename T> typename T::iterator Easyfind(T& src, int nbr)
{
	typename T::iterator ptr;

	ptr = std::find(src.begin(), src.end(), nbr);
	if(ptr == src.end())
		throw NO_OCCURENCE_FOUND();
	return (ptr);
};





#endif