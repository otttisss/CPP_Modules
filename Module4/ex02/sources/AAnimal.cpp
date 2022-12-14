/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:24:07 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/31 17:28:26 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void): type("Deafult")
{
	std::cout << "AAnimal Default constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &src)
{
	std::cout << "AAnimal Copy constructor called" << std::endl;
	*this = src;
}

AAnimal::AAnimal(std::string type)
{
	std::cout << "AAnimal Name constructor called" << std::endl;
	this->type = type;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal Destructor called" << std::endl;
}

std::string AAnimal::getType(void) const
{
	return (this->type);
}

AAnimal& AAnimal::operator=(AAnimal const &rhs)
{
	if (this != &rhs)
		this->type = rhs.getType();
	return (*this);
}

void	AAnimal::makeSound(void) const
{
	std::cout << "SILENCE" << std::endl;
}