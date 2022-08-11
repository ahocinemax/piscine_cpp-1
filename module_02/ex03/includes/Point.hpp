/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 21:08:21 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/11 09:14:54 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private :
		Fixed const _x;
		Fixed const _y;

	public :
		Point();
		Point(const float x, const float y);
		Point(const Point & src);
		Point & operator=(const Point & rhs);
		~Point();

		const Fixed& getX() const;
		const Fixed& getY() const;
};

#endif