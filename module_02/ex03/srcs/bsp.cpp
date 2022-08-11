/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 21:28:33 by nburat-d          #+#    #+#             */
/*   Updated: 2022/08/11 10:33:57 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"

Fixed sign (Point p1, Point p2, Point p3)
{
    return ((Fixed)p1.getX() - (Fixed)p3.getX()) * ((Fixed)p2.getY() - (Fixed)p3.getY()) - ((Fixed)p2.getX() - (Fixed)p3.getX()) * ((Fixed)p1.getY() - (Fixed)p3.getY());
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    float d1, d2, d3;
    bool has_neg, has_pos;

    d1 = sign(point, a, b).toFloat();
    d2 = sign(point, b, c).toFloat();
    d3 = sign(point, c, a).toFloat();

    has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

    return !(has_neg && has_pos);
}

bool	InRay(Point a, Point b, Point point)
{
	Fixed	m;
	Fixed	p;
	if (((Fixed)a.getX() == (Fixed)b.getX() && (Fixed)a.getX() == (Fixed)point.getX())
		|| ((Fixed)a.getY() == (Fixed)b.getY() && (Fixed)a.getY() == (Fixed)point.getY()))
		return (true);
	m = (((Fixed)b.getY() - (Fixed)a.getY()) / ((Fixed)b.getX() - (Fixed)a.getX()));
	p = (Fixed)a.getY() - (m * (Fixed)a.getX());
	if (((m * (Fixed)point.getX()) - (Fixed)point.getY() + p) == 0)
		return (true);
	return (false);
}

bool	isOnEdge(Point const a, Point const b, Point const c, Point const point)
{
	if (InRay(a, b, point))
		return (true);
	if (InRay(a, c, point))
		return (true);
	if (InRay(b, c, point))
		return (true);
	return (false);
}
