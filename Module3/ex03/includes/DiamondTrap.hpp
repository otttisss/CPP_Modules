/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 00:00:19 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/28 00:04:46 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>


class DiamondTrap : public FragTrap, public ScavTrap
{
	
	public:
		
		DiamondTrap (void);
		DiamondTrap (DiamondTrap const &src);
		DiamondTrap (std::string newName);
		~DiamondTrap (void);
		DiamondTrap& operator=(DiamondTrap const &rhs);
		
		virtual void	attack(const std::string& target);
		void			whoAmI(void);
	
	private:

		std::string name;
};

#endif