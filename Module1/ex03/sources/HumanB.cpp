/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:59:23 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/25 15:30:17 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon(0)
{

};

HumanB::~HumanB()
{

};

void	HumanB::setWeapon(Weapon& newWeapon)
{
	this->weapon = &newWeapon;
};

void	HumanB::attack(void) const
{
	if (this->weapon)
		std::cout << this->name << ": attack with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << ": can't attack because no weapon" << std::endl;
}