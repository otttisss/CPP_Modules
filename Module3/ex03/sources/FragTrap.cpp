/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:31:36 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/28 00:20:03 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_maxHitPoints = 100;
	
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src): ClapTrap(src)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(std::string newName): ClapTrap(newName)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	this->_maxHitPoints = 100;
	
	std::cout << "FragTrap Name constructor called" << std::endl;	
}

FragTrap& FragTrap::operator=(FragTrap const &rhs)
{
	ClapTrap::operator=(rhs);
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::string	buffer;

	std::cout << "FragTrap: " << this->_name << " give me a high five< please! [y/n]" << std::endl;
	std::getline(std::cin, buffer);
	if (std::cin.eof() == 1)
	{
		std::cout << "FragTrap: Don't use Ctrl + D" << std::endl;
		return ;
	}
	while (buffer != "y" && buffer != "n")
	{
		std::cout << "FragTrap: " << this->_name << " give me a high five, please! [y/n]" << std::endl;
		std::getline(std::cin, buffer);
		if (std::cin.eof() == 1)
		{
			std::cout << "FragTrap: Don't use Ctrl + D" << std::endl;
			return ;
		}
	}
	if (buffer == "y")
		std::cout << "Take my high five!" << std::endl;
	else if (buffer == "n")
		std::cout << "Okay..." << std::endl;
}

void	FragTrap::setAttackDamage()
{
	this->_attackDamage = 30;
	return ;
}