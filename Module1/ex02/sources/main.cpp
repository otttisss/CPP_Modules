/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:41:18 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/25 13:54:51 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string stringINIT = "HI THIS IS BRAIN";

	std::string* stringPTR = &stringINIT;
	std::string& stringREF = stringINIT;
	
	std::cout << "The memory address of the string variable:" << std::endl;
	std::cout << &stringINIT << std::endl << std::endl;
	std::cout << "The memory address of the stringPTR:" << std::endl;
	std::cout << stringPTR << std::endl << std::endl;
	std::cout << "The memory address of the stringREF:" << std::endl;
	std::cout << &stringREF << std::endl << std::endl;

	std::cout << "The value of the string variable:" << std::endl;
	std::cout << stringINIT << std::endl << std::endl;
	std::cout << "The value of the stringPTR:" << std::endl;
	std::cout << *stringPTR << std::endl << std::endl;
	std::cout << "The value of the stringREF:" << std::endl;
	std::cout << stringREF << std::endl << std::endl;
	
	return (0);
}