/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:30:56 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/17 14:27:13 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

# include <stdint.h>
# include <iostream>
# include <string>

class Data
{
	private :
		int	_value; 

	public :
		Data();
		Data(int nbr);
		Data(const Data & src);
		Data & operator=(const Data & rhs);
		~Data();
		const int & getValue() const;
		void	setValue(int& value);
		
};

#endif