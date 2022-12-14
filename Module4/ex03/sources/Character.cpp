/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:15:59 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/31 20:26:54 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(Character const &src)
{
	*this = src;
}

Character::Character(const std::string &name): _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	this->_nMateria = 0;
}

Character::~Character( void)
{

}

std::string const &Character::getName() const
{
	return (this->_name);
}

AMateria* Character::getMateria(int idx) const
{
	return (this->_inventory[idx]);
}

int	Character::getNMateria(void) const
{
	return (this->_nMateria);
}

Character& Character::operator=(Character const &rhs)
{
	this->_name = rhs._name;
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = rhs.getMateria(i);
		this->_nMateria = rhs.getNMateria();
	}
	return (*this);
}

void	Character::equip(AMateria *m)
{
	if (!m)
		std::cout << "m = null" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			// std::cout << this->_name << " is equiped with " << this->_inventory[i]->getType() << std::endl;
			this->_nMateria++;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx > 3 || idx < 0)
		return ;
	if (this->_inventory[idx] != NULL)
	{
		this->_inventory[idx] = NULL;
		this->_nMateria--;
	} 
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx > 3 || idx < 0)
		return ;
	if (this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
}