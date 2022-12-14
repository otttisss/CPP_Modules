/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 22:00:33 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/31 22:46:19 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int main()
{
	std::cout << "---- TEST ----" << std::endl;
	{
		std::cout << "test 1 [156] :" << std::endl;
		try
		{
			Bureaucrat toto("b1", 156);
		}
		catch(std::exception& e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "test 2 [150] :" << std::endl;
		try
		{
			Bureaucrat toto("b2", 150);
			std::cout << toto;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "test 3 [150 + 1] :" << std::endl;
		try {
				Bureaucrat toto("b1", 150);
				std::cout << toto;
				toto.destitute();
		} 
		catch (std::exception &e) 
		{ 
			std::cout << e.what();
		}

		std::cout << "test 4 [0]:" << std::endl;
		try {
				Bureaucrat toto("b1", 0);
				std::cout << toto;
		} 
		catch (std::exception &e) 
		{ 
			std::cout << e.what();
		}

		std::cout << "test 5 [1]:" << std::endl;
		try {
				Bureaucrat toto("b1", 1);
				std::cout << toto;
		} 
		catch (std::exception &e)
		{ 
			std::cout << e.what();
		}

		std::cout << "test 6 [1 - 1]:" << std::endl;
		try {
				Bureaucrat toto("b1",1);
				std::cout << toto;
				toto.promote();
		} 
		catch (std::exception &e)
		{ 
			std::cout << e.what();
		}

		std::cout << "test 7 [1 + 1]:" << std::endl;
		try {
				Bureaucrat toto("b1",1);
				std::cout << toto;
				toto.destitute();
				std::cout << toto;

		} 
		catch (std::exception &e) 
		{ 
			std::cout << e.what();
		}

		std::cout << "test 7 [2 - 1]:" << std::endl;
		try {
				Bureaucrat toto("b1",2);
				std::cout << toto;
				toto.promote();
				std::cout << toto;

		} 
		catch (std::exception &e) { std::cout << e.what();}

		std::cout << "test 8 [-1]:" << std::endl;
		try {
				Bureaucrat toto("b1",-1);
				std::cout << toto;
				toto.promote();
				std::cout << toto;

		} 
		catch (std::exception &e) { std::cout << e.what();}
	}
}