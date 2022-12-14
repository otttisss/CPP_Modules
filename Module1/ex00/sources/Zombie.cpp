/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:45:26 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/25 01:15:32 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string zombieName)
{
	this->name = zombieName;	
};

Zombie::~Zombie()
{
	std::cout << this->name << ": " << "zombie destroyed" << std::endl;
};

void Zombie::announce(void)
{
	std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
};

std::string Zombie::getName(void)
{
	return (this->name);
}
