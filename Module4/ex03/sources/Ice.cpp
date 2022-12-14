/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:39:22 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/31 20:21:10 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice")
{

}

Ice::Ice(Ice const &src)
{
	*this = src;
}

Ice::~Ice(void)
{

}

std::string Ice::getType(void) const
{
	return (this->_type);
}

Ice& Ice::operator=(Ice const &rhs)
{
	if (this != &rhs)
		AMateria::operator=(rhs);
	return (*this);
}

Ice* Ice::clone(void) const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}