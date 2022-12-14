/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:32:55 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/31 18:12:13 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"

int main(void)
{
	// const AAnimal *j = new Dog();
	// const AAnimal *i = new Cat();

	// std::cout << std::endl;
	// std::cout << "SOUND: " << std::endl;
	// std::cout << std::endl;
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// j->makeSound();
	// i->makeSound();
	// std::cout << std::endl;
	// std::cout << std::endl;
	// delete i;
	// delete j;

	// return (0);
	AAnimal *animals[10];
  	AAnimal *dogggg = new Dog();
  	//Animal ani;
  	AAnimal *cat = new Cat();
  	dogggg->makeSound();
  	cat->makeSound();

  	AAnimal *test;
  	test = cat;
  	test->makeSound();

  //Animal aanimal;
  	for(int i = 0; i < 10; i++)
  	{
    	if(i < 5)
      		animals[i] = new Cat();
    	else
      		animals[i] = new Dog();
 	}
  	for(int i = 0; i < 10; i++)
  	{
    	animals[i]->makeSound();
  	}
  	for(int i = 0; i < 10; i++)
  	{
    	delete animals[i];
  	}
  	delete dogggg;
  	delete cat;
}