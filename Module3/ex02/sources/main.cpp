/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:45:31 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/27 23:35:07 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	std::cout << "-------- ClapTrap Test ---------" << std::endl;
	{
	ClapTrap test("ZOMBIE");
	
	std::cout << "hit points: [" << test.getHitPoints() << "]" << std::endl;
	std::cout << "energy points: [" << test.getEnergyPoints() << "]" << std::endl;
	std::cout << "damage: [" << test.getAttackDamage() << "]" << std::endl;
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

	ClapTrap test2;
	test2 = test;
	std::cout << std::endl;
	test2.takeDamage(3);
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "-------- ScavTrap Test ---------" << std::endl;
	{
	ScavTrap test("KNIGHT");
	
	std::cout << "hit points: [" << test.getHitPoints() << "]" << std::endl;
	std::cout << "energy points: [" << test.getEnergyPoints() << "]" << std::endl;
	std::cout << "damage: [" << test.getAttackDamage() << "]" << std::endl;
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

	ScavTrap test2;
	ScavTrap test3(test2);
	
	test2 = test;
	std::cout << std::endl;
	test2.takeDamage(3);
	test2.guardGate();
	test2.takeDamage(1000);
	}

	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "-------- FragTrap Test ---------" << std::endl;
	{
	FragTrap test("Human");
	std::cout << "hit points: [" << test.getHitPoints() << "]" << std::endl;
	std::cout << "energy points: [" << test.getEnergyPoints() << "]" << std::endl;
	std::cout << "damage: [" << test.getAttackDamage() << "]" << std::endl;
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
	test.highFivesGuys();
	std::cout << std::endl;

	FragTrap test2;
	
	test2 = test;
	std::cout << std::endl;
	test2.takeDamage(3);
	test2.takeDamage(1000);
	}
	
	return (0);
}