/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 22:00:33 by cmilagro          #+#    #+#             */
/*   Updated: 2022/11/01 18:17:14 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include "Form.hpp"

int main()
{
	std::cout << "---- TEST ----" << std::endl;
	{
		std::cout << "test 1 [156] [1]:" << std::endl;
		try
		{
			Form b1("b1", 156, 1);
		}
		catch(std::exception& e)
		{
			std::cout << e.what();
		}
		std::cout << "test 2 [0] [1]:" << std::endl;
		try
		{
			Form b1("b1", 0, 1);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << "test 3 can't signed" << std::endl;
		try {
				Form b1("b1", 1, 1);
				Bureaucrat Michu("Madame Michu", 150);
				Michu.signForm(b1);
		} 
		catch (std::exception &e) 
		{ 
			std::cout << e.what();
		}

		std::cout << "test 4 can signed" << std::endl;
		try {
				Form b1("b1", 150, 1);
				Bureaucrat Michu("Madame Michu", 150);
				Michu.signForm(b1);
				std::cout << b1;
		} 
		catch (std::exception &e) 
		{ 
			std::cout << e.what();
		}

		std::cout << "test 5 can signed" << std::endl;
		try {
				Form b1("b1", 4, 1);
				Bureaucrat Michu("Madame Michu", 3);
				Michu.signForm(b1);
				std::cout << b1;
		} 
		catch (std::exception &e)
		{ 
			std::cout << e.what();
		}
	}
}