/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:02:51 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/27 17:23:31 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_maxHitPoints = 100;
	
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src): ClapTrap(src)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl; 
}

ScavTrap::ScavTrap(std::string newName): ClapTrap(newName)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->_maxHitPoints = 100;

	std::cout << "ScavTrap Name constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " is dead" << std::endl;
		std::cout << "life point: " << "0 " << std::endl;
		return ;
	}
	if (!this->_energyPoints)
	{
		std::cout << "ScavTrap " << this->_name << "not enough energy points: " << this->_energyPoints << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << "points of damage!" << std::endl;
	std::cout << "energy point: " << this->_energyPoints << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "ScavTrap " << this->_name << " is deaad" << std::endl;
		std::cout << "life point: " << "0 " << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " gate keeper mode" << std::endl;
}
