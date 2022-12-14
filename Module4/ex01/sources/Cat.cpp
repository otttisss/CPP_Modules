/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 21:56:24 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/31 17:39:22 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat(void) : Animal("Cat"), _brain(new Brain())
{
	std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(Cat const &src) : Animal(src)
{
	std::cout << "Cat Copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor called" << std::endl;
	delete this->_brain;
}

Cat& Cat::operator=(Cat const &rhs)
{
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		*(this->_brain) = *(rhs.getBrain());
	}	
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "🐱 MEOW 🐱" << std::endl;
}

Brain* Cat::getBrain(void) const
{
	return (this->_brain);
}