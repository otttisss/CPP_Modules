/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 20:08:10 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/31 20:10:46 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int main()
{
	IMateriaSource* src = new MateriaSource(); 
	src->learnMateria(new Ice()); 
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
	
	ICharacter* bob = new Character("bob"); me->use(0, *bob);
	
    me->use(1, *bob);
	
	delete bob; 
	delete me; 
	delete src;
	
	return 0; 
}