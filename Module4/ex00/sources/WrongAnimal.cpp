/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 22:23:16 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/28 22:29:35 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("Default")
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = src;
}

WrongAnimal::WrongAnimal(std::string type)
{
	std::cout << "WrongAnimal Name constructor called" << std::endl;
	this->type = type;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "SILENCE" << std::endl;
}