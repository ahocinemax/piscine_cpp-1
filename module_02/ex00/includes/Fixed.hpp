/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 14:49:52 by nburat-d          #+#    #+#             */
/*   Updated: 2022/07/28 19:12:23 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

# include <iostream>

class	Fixed
{
	private :
		int _raw_val;
		static const int _fract_bits = 8;

	public :
		Fixed(void);
		Fixed(const Fixed& old);
		Fixed& operator=(const Fixed& old);
		~Fixed(void);
		const int& getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif