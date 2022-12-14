/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 19:54:31 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/31 19:56:27 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include <iostream>
# include "AMateria.hpp"

class IMateriaSource
{

	public:
	
		virtual ~IMateriaSource() {}
		virtual void	learnMateria(AMateria *) = 0;
		virtual	AMateria* createMateria(std::string const & type) = 0;
};

#endif