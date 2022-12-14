/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 22:30:17 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/28 22:31:09 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{

	public:
		
		WrongCat (void);
		WrongCat (WrongCat const &src);
		virtual ~WrongCat(void);
		WrongCat& operator=(WrongCat const &rhs);
		
		virtual void makeSound(void) const;
	
};

#endif