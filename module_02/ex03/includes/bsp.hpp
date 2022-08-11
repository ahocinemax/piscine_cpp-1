/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 09:31:57 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/11 10:34:32 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSP_HPP
#define BSP_HPP

#include "Fixed.hpp"
#include "Point.hpp"

Fixed	sign (Point p1, Point p2, Point p3);
bool	bsp(Point const a, Point const b, Point const c, Point const point);
bool	isOnEdge(Point const a, Point const b, Point const c, Point const point);

#endif