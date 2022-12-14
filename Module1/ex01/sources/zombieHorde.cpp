/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 01:23:46 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/25 01:30:36 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie *zombieHorde(int nb, std::string name)
{
	if (nb <= 0)
		return (NULL);
	Zombie *newHorde = new Zombie[nb];
	for (int i = 0; i < nb; i++)
		newHorde[i].setName(name);
	return (newHorde);
}