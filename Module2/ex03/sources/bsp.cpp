/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:53:45 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/27 15:07:13 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"
#include <cmath>

float	area(Point a, Point b, Point point)
{
	return (std::abs((a.getX() * (b.getY() - point.getY())) + b.getX() * (point.getY() - a.getY()) + point.getX() * (a.getY() - b.getY()) / 2.0 ));
}

bool	in_line(Point a, Point b, Point point)
{
	if (a.getX() == b.getX() == point.getX())
		return (false);
	if (a.getY() == b.getY() == point.getY())
		return (false);
	return (true);
}

bool	bsp(Point const A, Point const B, Point const C, Point const Point)
{
	float	Ar;
	float	A1;
	float	A2;
	float	A3;
	if (in_line(A, B, Point) && in_line(B, C, Point) && in_line(C, A, Point))
	{
		Ar = area(A, B, C);
		A1 = area(Point, B, C);
		A2 = area(Point, A, C);
		A3 = area(Point, A, B);
		
		return (Ar == A1 + A2 + A3);
	}
	return (false);
}