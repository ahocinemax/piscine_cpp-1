/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:49:52 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/11 19:49:59 by nburat-d         ###   ########.fr       */
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
		Fixed& operator=(const Fixed& rhs);
		bool operator>(const Fixed& rhs);
		bool operator<(const Fixed& rhs);
		bool operator>=(const Fixed& rhs);
		bool operator<=(const Fixed& rhs);
		bool operator!=(const Fixed& rhs);
		bool operator==(const Fixed& rhs);
		Fixed operator+(const Fixed& rhs);
		Fixed operator-(const Fixed& rhs);
		Fixed operator/(const Fixed& rhs);
		Fixed operator*(const Fixed& rhs);
		
		Fixed& operator++();
		Fixed& operator--();
		Fixed& operator++(int);
		Fixed& operator--(int);
		
		static Fixed & min(const Fixed& fxt1, const Fixed& fxt2);
		static Fixed & min(Fixed& fxt1, Fixed& fxt2);
		static Fixed & max(const Fixed& fxt1, const Fixed& fxt2);
		static Fixed & max(Fixed& fxt1, Fixed& fxt2);

		
		~Fixed(void);
		
		const int& getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat() const;
		int toInt() const;
};

std::ostream & operator<<(std::ostream &os, const Fixed &rhs);

#endif