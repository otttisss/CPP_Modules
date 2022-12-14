/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:33:47 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/27 15:13:53 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

class Point
{
	public:

		Point (void);
		Point (const float newX, const float newY);
		Point (Point const &src);
		~Point (void);
		Point& operator=(Point const &rhs);
		
		float	getX(void) const;
		float	getY(void) const;		
	
	private:

		Fixed const _x;
		Fixed const _y;
};

bool	bsp(Point const A, Point const B, Point const C, Point const Point);

#endif