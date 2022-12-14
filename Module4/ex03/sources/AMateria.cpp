/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:39:10 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/31 20:21:56 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria* AMateria::_all[2048];
int	AMateria::index = 0;

AMateria::AMateria(void): _type("Default")
{
	if (AMateria::index < 2048)
	{
		AMateria::_all[AMateria::index] = this;
		AMateria::index++;
	}
}

AMateria::AMateria(AMateria const &src)
{
	if (AMateria::index < 2048)
	{
		AMateria::_all[AMateria::index] = this;
		AMateria::index++;
	}
	*this = src;
}

AMateria::AMateria(std::string const & type): _type(type)
{
	if (AMateria::index < 2048)
	{
		AMateria::_all[AMateria::index] = this;
		AMateria::index++;
	}
}

AMateria::~AMateria(void)
{
}

std::string const & AMateria::getType(void) const
{
	return (this->_type);
}

AMateria& AMateria::operator=(AMateria const &rhs)
{
	if (this != &rhs)
		this->_type = rhs.getType();
	return (*this);
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
}

void	AMateria::cleanAll(void)
{
	for (int i = 0; i < 2048; i++)
	{
		if (AMateria::_all[i])
		{
			delete _all[i];
			_all[i] = NULL;
		}
	}
}