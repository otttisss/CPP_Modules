/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:58:22 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/25 01:33:54 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	printAllZombie(int nb, Zombie *newHorde)
{
	if (!newHorde)
		return ;
	for (int i = 0; i < nb; i++)
		newHorde[i].announce();
}

int main()
{
	int	nb;

	std::cout << "Choose a number of Rob Zombies between [0] - [100000]" << std::endl;
	std::cin >> nb;
	{
		Zombie *newHorde = zombieHorde(nb, "Rob");
		printAllZombie(nb, newHorde);
		delete [] newHorde;
	}
}