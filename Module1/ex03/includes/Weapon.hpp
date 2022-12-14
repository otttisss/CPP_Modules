/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:59:34 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/25 14:06:10 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>
# include <iomanip>
# include <string>

class Weapon{

	public:
		
		Weapon(const std::string& typeName);
		~Weapon();
		const std::string& getType(void) const;
		bool setType(const std::string& typeName);

	private:
		std::string type;

};

#endif