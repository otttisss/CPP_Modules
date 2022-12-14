/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 22:10:53 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/28 22:17:52 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(Dog const &src): Animal(src)
{
	std::cout << "Dog Copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor called" << std::endl;
}

Dog& Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
		Animal::operator=(rhs);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "🐶GAFGAF🐶" << std::endl;
}