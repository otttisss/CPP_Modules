/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 22:00:44 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/28 22:00:46 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat: public Animal
{

	public:
		
		Cat (void);
		Cat (Cat const &src);
		virtual ~Cat(void);
		Cat& operator=(Cat const &rhs);
		
		virtual void makeSound(void) const;
	
};

#endif