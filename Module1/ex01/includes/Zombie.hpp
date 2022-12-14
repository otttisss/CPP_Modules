/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:45:12 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/25 01:30:57 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <iomanip>
# include <string>

class Zombie {
	
	public:
	
		Zombie();
		~Zombie();
		void announce(void);
		std::string getName(void);
		void setName(std::string zombieName);
	
	private:

		std::string name;
};

Zombie *zombieHorde(int nb, std::string name);

#endif