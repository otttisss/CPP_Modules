/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:14:32 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/25 14:19:45 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon (const std::string& typeName)
{
	this->type = typeName;
};

Weapon::~Weapon()
{
	
};

const std::string& Weapon::getType(void) const
{
	return (this->type);
};

bool	Weapon::setType(const std::string& typeName)
{
	if (typeName.length() == 0)
	{
		std::cout << "Weapon can't be an empty string" << std::endl;
		return (false);
	}
	else
	{
		this->type = typeName;
		return (true);
	}
};