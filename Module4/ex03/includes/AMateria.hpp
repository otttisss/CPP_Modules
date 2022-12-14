/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:29:17 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/31 18:38:36 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
	
	public:

		AMateria(std::string const & type);
		AMateria(AMateria const &src);
		virtual ~AMateria(void);
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void	use(ICharacter& target);
		AMateria&	operator=(AMateria const &rhs);
		void	cleanAll(void);

	protected:

		AMateria(void);
		std::string _type;
		static AMateria* _all[2048];
		static int		index;
};

#endif