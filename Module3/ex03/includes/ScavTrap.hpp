/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:56:36 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/28 17:24:31 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public virtual ClapTrap
{

	public:

		ScavTrap (void);
		ScavTrap (ScavTrap const &src);
		ScavTrap (std::string newName);
		~ScavTrap (void);
		ScavTrap& operator=(ScavTrap const &rhs);
		
		void virtual	attack(const std::string& target);
		void			guardGate(void);
	
};

#endif