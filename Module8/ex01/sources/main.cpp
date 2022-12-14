/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:44:45 by cmilagro          #+#    #+#             */
/*   Updated: 2022/11/03 20:18:16 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	std::cout << "----- BASIC TEST -----" << std::endl;
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		
		Span span = Span(15000);
		std::vector<int> vect;
		for (int i = 0; i < 15000; i++)
			vect.push_back(i);
		span.addRangeNumber(vect.begin(), vect.end());
		std::cout << span.shortestSpan() << std::endl;
		std::cout << span.longestSpan() << std::endl;
	}
	std::cout << "----- ERROR TEST -----" << std::endl;
	{
		try 
		{
				Span sp = Span(5);
				sp.addNumber(6);
				sp.addNumber(3);
				sp.addNumber(17);
				sp.addNumber(9);
				sp.addNumber(11);
				sp.addNumber(11);
		}
		catch(const std::exception& e)
    	{
        	std::cerr << e.what() << std::endl;
    	}

		try 
		{ 
    		Span sp = Span(0);
    		std::cout << sp.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
    	{
        	std::cerr << e.what() << std::endl;
    	}
		try
		{ 
    		Span sp = Span(0);
    		std::vector<int> vect;
    		std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
    	{
        	std::cerr << e.what() << std::endl;
    	}
	}
	std::cout << "----- NEGATIVE TEST -----" << std::endl;
	{
		Span sp = Span(5);
		sp.addNumber(-6);
		sp.addNumber(-3);
		sp.addNumber(-17);
		sp.addNumber(-9);
		sp.addNumber(-11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	return (0);
}