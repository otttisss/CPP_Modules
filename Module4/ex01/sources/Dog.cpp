/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 22:10:53 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/31 16:56:31 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void) : Animal("Dog"), _brain(new Brain())
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
	delete this->_brain;
}

Dog& Dog::operator=(Dog const &rhs)
{
	if (this != &rhs)
	{
		Animal::operator=(rhs);
		*(this->_brain) = *(rhs.getBrain());
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "🐶GAFGAF🐶" << std::endl;
}

Brain* Dog::getBrain(void) const
{
	return (this->_brain);
}