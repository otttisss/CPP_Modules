/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 01:15:36 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/28 01:22:15 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void): type("Default")
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = src;
}

Animal::Animal(std::string type)
{
	std::cout << "Animal Name constructor called" << std::endl;
	this->type = type;
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor called" << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->type);
}

Animal& Animal::operator=(Animal const &rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "SILENCE" << std::endl;
}