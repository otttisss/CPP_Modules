/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:44:59 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/31 19:47:48 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure: public AMateria
{

	public:

		Cure (void);
		Cure (std::string const &type);
		Cure (Cure const &src);
		virtual ~Cure(void);
		virtual Cure* clone() const;
		virtual void use(ICharacter& target);
		Cure& operator=(Cure const &rhs);
		std::string getType(void) const;
};

#endif