/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:45:39 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/28 00:36:39 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0), _maxHitPoints(10)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = src;
}

ClapTrap::ClapTrap(std::string newName): _hitPoints(10), _energyPoints(10), _attackDamage(0), _maxHitPoints(10)
{
	std::cout << "ClapTrap Name constructor called" << std::endl;
	this->_name = newName;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

std::string ClapTrap::getName(void) const
{
	return (this->_name);
}

int	ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

int ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

int ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

ClapTrap& ClapTrap::operator=(ClapTrap const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs.getName();
		this->_attackDamage = rhs.getAttackDamage();
		this->_energyPoints = rhs.getEnergyPoints();
		this->_hitPoints = rhs.getHitPoints();
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
		std::cout << "life point " << "0 " << std::endl;
		return ;
	}
	if (!this->_energyPoints)
	{
		std::cout << "ClapTrap " << this->_name << " not enough energy point: " << this->_energyPoints << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing "
	 << this->_attackDamage << " points of damage!" << std::endl;
	 std::cout << "energy point: " << this->_energyPoints << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " take " << amount << " damage " << std::endl;
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
		std::cout << "life points: " << "0 " << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " take " << amount << " damage " << std::endl;
	std::cout << "life points: " << this->_hitPoints << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
		std::cout << "life points: " << "0 " << std::endl;
		return ;
	}
	if (!this->_energyPoints)
	{
		std::cout << "ClapTrap " << this->_name << " not enough energy point: " << this->_energyPoints << std::endl;
		return ;
	}
	if (this->_hitPoints == this->_maxHitPoints)
	{
		std::cout << "ClapTrap " << this->_name << " Max hitPoint: " << this->_hitPoints << std::endl;
		return ;
	}
	this->_energyPoints--;
	this->_hitPoints += amount;
	if (this->_hitPoints > this->_maxHitPoints)
		this->_hitPoints = this->_maxHitPoints;
	std::cout << "ClapTrap " << this->_name << " heal himself of " << amount << " life point" << std::endl;
	std::cout << "energy points: " << this->_energyPoints << std::endl;
	std::cout << "life points: " << this->_hitPoints << std::endl;
}
