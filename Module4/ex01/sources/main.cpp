/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 22:32:53 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/31 16:59:30 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

int main(void)
{
	Animal *data[6];

	std::cout << "---CONSTRUCTOR---" << std::endl;

	for (int i = 0; i < 6; i++)
	{
		if (i % 2 == 0)
			data[i] = new Cat();
		else
			data[i] = new Dog();
	}
	
	std::cout << "---DESTRUCTOR---" << std::endl;
	
	for (int i = 0; i < 6; i++)
		delete data[i];

	std::cout << "---COPY TEST---" << std::endl;
	
	Dog dog1;
	Dog dog2;

	dog1.getBrain()->setIdeas("Let's go play with a ball");
	std::cout << "dog1: " << std::endl;
	std::cout << (*dog1.getBrain()) << std::endl;
	dog2 = dog1;
	std::cout << "dog2: " << std::endl;
	std::cout << (*dog2.getBrain()) << std::endl;
	
	return (0);
}