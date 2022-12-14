/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:45:31 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/28 00:33:00 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	std::cout << "-------- DiamondTrap Test ---------" << std::endl;
	{
	DiamondTrap test("DiamondTrap");
	
	std::cout << "hit points: [" << test.getHitPoints() << "]" << std::endl;
	std::cout << "energy points: [" << test.getEnergyPoints() << "]" << std::endl;
	std::cout << "damage: [" << test.getAttackDamage() << "]" << std::endl;
	std::cout << std::endl;
	test.whoAmI();
	std::cout << std::endl;
	test.attack("John");
	std::cout << std::endl;
	test.takeDamage(6);
	std::cout << std::endl;
	test.beRepaired(4);
	std::cout << std::endl;
	test.takeDamage(6);
	std::cout << std::endl;
	test.beRepaired(8);
	std::cout << std::endl;
	
	test.attack("Jimmy");
	std::cout << std::endl;
	test.attack("Kat");
	std::cout << std::endl;
	test.beRepaired(8);
	std::cout << std::endl;
	test.takeDamage(17);
	std::cout << std::endl;
	test.beRepaired(8);
	std::cout << std::endl;
	test.guardGate();
	std::cout << std::endl;
	test.highFivesGuys();

	DiamondTrap test2;
	test2 = test;
	std::cout << std::endl;
	test2.takeDamage(3);
	}
	return (0);
}