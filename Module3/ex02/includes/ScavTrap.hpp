/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:56:36 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/27 17:00:58 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap
{

	public:

		ScavTrap (void);
		ScavTrap (ScavTrap const &src);
		ScavTrap (std::string newName);
		~ScavTrap (void);
		ScavTrap& operator=(ScavTrap const &rhs);
		
		virtual void	attack(const std::string& target);
		void			guardGate(void);
	
};

#endif