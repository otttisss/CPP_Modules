/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:26:40 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/28 17:05:21 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap
{

	public:

		FragTrap (void);
		FragTrap (FragTrap const &src);
		FragTrap (std::string newName);
		~FragTrap (void);
		FragTrap& operator=(FragTrap const &rhs);

		void	highFivesGuys(void);

};

#endif