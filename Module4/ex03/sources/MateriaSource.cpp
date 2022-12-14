/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:01:45 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/31 20:21:38 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		this->_tab[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
}

MateriaSource::~MateriaSource(void)
{

}

MateriaSource& MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
			this->_tab[i] = rhs._tab[i];
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* newMateria)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_tab[i] == NULL)
		{
			this->_tab[i] = newMateria;
				break ;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_tab[i] && this->_tab[i]->getType() == type)
			return (this->_tab[i]->clone());
	}
	return (0);
}