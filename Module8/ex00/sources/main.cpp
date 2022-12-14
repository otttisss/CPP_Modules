/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:01:45 by cmilagro          #+#    #+#             */
/*   Updated: 2022/11/03 17:14:51 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "easyfind.hpp"
#include <vector>
#include <set>

int main(void)
{
	std::cout << "test with vector" << std::endl;
	try
	{
		std::vector<int> vect;
		for (int i = 0; i < 10; i++)
		{
			std::cout << "add : [" << i << "] ";
			vect.push_back(i);
		}
		std::vector<int>::iterator it;
		std::cout << std::endl;
		it = easyFind(vect, 9);
		std::cout << "iterator : [" << *it << "]" << std::endl; 
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "test with vector error" << std::endl;
	try
	{
		std::vector<int> vect;
		for (int i = 0; i < 10; i++)
		{
			std::cout << "add : [" << i << "] ";
			vect.push_back(i);
		}
		std::vector<int>::iterator it;
		std::cout << std::endl;
		it = easyFind(vect, 10);
		std::cout << "iterator : [" << *it << "]" << std::endl; 
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "test with set" << std::endl;
	try
	{
		std::set<int> set;
		for (int i = 0; i < 10; i++)
		{
			std::cout << "add : [" << i << "] ";
			set.insert(i);
		}
		std::set<int>::iterator it;
		std::cout << std::endl;
		it = easyFind(set, 9);
		std::cout << "iterator : [" << *it << "]" << std::endl; 
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "test with set error" << std::endl;
	try
	{
		std::set<int> set;
		for (int i = 0; i < 10; i++)
		{
			std::cout << "add : [" << i << "] ";
			set.insert(i);
		}
		std::set<int>::iterator it;
		std::cout << std::endl;
		it = easyFind(set, 10);
		std::cout << "iterator : [" << *it << "]" << std::endl; 
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}