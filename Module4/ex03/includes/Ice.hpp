/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:36:07 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/31 19:39:00 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice: public AMateria
{

	public:

		Ice(void);
		Ice(std::string const & type);
		Ice (Ice const &src);
		virtual ~Ice(void);
		virtual Ice* clone() const;
		virtual void use(ICharacter& target);
		Ice& operator=(Ice const &rhs);
		std::string getType(void) const;
};

#endif