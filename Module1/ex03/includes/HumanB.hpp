/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:00:01 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/25 15:30:29 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
# include <string>
# include <iomanip>
# include "Weapon.hpp"

class HumanB{

	public:

		HumanB(std::string name);
		~HumanB();
		void attack(void) const;
		void setWeapon(Weapon& weapon);

	private:

		std::string name;
		Weapon *weapon;
};

#endif