/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:45:54 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/27 17:06:59 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{

	public:

		ClapTrap (void);
		ClapTrap (ClapTrap const &src);
		ClapTrap (std::string newName);
		~ClapTrap (void);
		
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		int		getAttackDamage(void) const;
		int		getEnergyPoints(void) const;
		int		getHitPoints(void) const;
		std::string getName(void) const;
		ClapTrap& operator=(ClapTrap const &rhs);

	protected:

		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
		int			_maxHitPoints;
		
};

#endif