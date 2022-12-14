/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:45:12 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/25 01:12:24 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <iomanip>
# include <string>

class Zombie {
	
	public:
	
		Zombie(std::string zombieName);
		~Zombie();
		void announce(void);
		std::string getName(void);
	
	private:

		std::string name;
};

Zombie *newZombie(std::string name);
void	randomChum(std::string name);

#endif