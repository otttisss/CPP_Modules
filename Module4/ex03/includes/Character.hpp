/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:30:05 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/31 19:14:38 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

class Character: public ICharacter
{

	public:

		Character (Character const &src);
		Character (const std::string &name);
		virtual ~Character();
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		AMateria* getMateria(int idx) const;
		virtual std::string const &getName() const;
		int	getNMateria(void) const;
		Character& operator=(Character const &rhs);

	private:
	
		AMateria*	_inventory[4];
		int			_nMateria;
		std::string	_name;
};

#endif