/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:59:47 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/25 15:30:55 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include <string>
# include <iomanip>
# include "Weapon.hpp"

class HumanA{

	public:

		HumanA(std::string name, Weapon &newWeapon);
		~HumanA(void);
		void attack(void) const;

	private:

		std::string _name;
		Weapon &_weapon;

};

#endif