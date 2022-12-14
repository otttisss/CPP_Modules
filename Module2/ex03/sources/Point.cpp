/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:39:43 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/27 15:22:16 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(void) : _x(0), _y(0)
{
	
};

Point::Point(Point const &src)
{
	*this = src;
	return ;
};

Point::Point(float const newX, float const newY) : _x(Fixed(newX)), _y(Fixed(newY))
{
	
};

Point::~Point(void)
{

};

Point& Point::operator=(Point const &rhs)
{
	Fixed* x = (Fixed*)&this->_x;
	Fixed* y = (Fixed*)&this->_y;

	if (&rhs == this)
		return (*this);
	*x = rhs._x;
	*y = rhs._y;
	return (*this);
}

float	Point::getX(void) const
{
	return (this->_x.toFloat());
}

float	Point::getY(void) const
{
	return (this->_y.toFloat());
}