/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:59:21 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/25 15:33:42 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &newWeapon): _name(name), _weapon(newWeapon)
{
};

HumanA::~HumanA()
{	
};

void	HumanA::attack(void) const
{
	std::cout << this->_name << ": attacks with their " << this->_weapon.getType() << std::endl;
};