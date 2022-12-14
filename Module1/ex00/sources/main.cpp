/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:58:22 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/25 01:12:18 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::cout << "Classic test" << std::endl;
	{
		Zombie rob("Rob1");
		rob.announce();
	}
	std::cout << "Test with function newZombie" << std::endl;
	{
		Zombie *cranb = newZombie("Rob2");
		cranb->announce();
		delete cranb;
	}
	std::cout << "Test with function randomChum" << std::endl;
	{
		randomChum("Rob3");
	}
}