/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 00:00:03 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/28 00:33:25 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap(), FragTrap(), ScavTrap()
{
	this->name = ClapTrap::_name;
	this->name = "_clap_name";
	FragTrap::setAttackDamage();
	std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src): ClapTrap(src)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap::DiamondTrap(std::string newName): ClapTrap(newName), FragTrap(), ScavTrap()
{
	this->name = ClapTrap::_name;
	this->name += "_clap_name";
	FragTrap::setAttackDamage();
	std::cout << "DiamondTrap Named constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << ClapTrap::_name << std::endl;
	std::cout << this->name << std::endl;
}
