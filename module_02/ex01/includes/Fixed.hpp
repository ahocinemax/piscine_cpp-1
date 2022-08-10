/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:49:52 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/10 19:57:42 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>
# include <math.h>
# include <cmath>

class	Fixed
{
	private :
		int _raw_bits;
		static const int _fract_bits = 8;

	public :
		Fixed();
		Fixed(const int nbr);
		Fixed(const float nbr);
		Fixed(const Fixed& old);
		Fixed& operator=(const Fixed& old);
		~Fixed(void);
		
		const int& getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat() const;
		int toInt() const;
};

std::ostream & operator<<(std::ostream &os, const Fixed &rhs);

#endif