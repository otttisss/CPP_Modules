/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 01:07:09 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/27 15:21:36 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include "Point.hpp"

int main(void)
{
	Point a(0, 0);
	Point b(0, 10);
	Point c(8, 7);

	Point* points = new Point[10];

	points[0] = Point(0, 0);
	points[1] = Point(5, 6);
	points[2] = Point(6, 5);
	points[3] = Point(9, 11);
	points[4] = Point(0, 1);
	points[5] = Point(0.001, 1);
	points[6] = Point(2, 5);
	points[7] = Point(8, 1);
	points[8] = Point(2.25, 4);
	points[9] = Point(-2, 7);

	for (int i = 0; i < 10; i++)
	{
		std::cout << "Point x = " << points[i].getX() << ", y = " << points[i].getY() << " ";
		if (true == bsp(a, b, c, points[i]))
			std::cout << "is in" << std::endl;
		else
			std::cout << "is out" << std::endl;
	}
	
	delete [] points;

	return (0);
}