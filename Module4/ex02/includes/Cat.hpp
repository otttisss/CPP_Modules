/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 22:00:44 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/31 17:32:15 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat: public AAnimal
{

	public:
		
		Cat (void);
		Cat (Cat const &src);
		virtual ~Cat(void);
		Cat& operator=(Cat const &rhs);
		
		virtual void makeSound(void) const;
		virtual	Brain* getBrain(void) const;
	
	private:
		
		Brain	*_brain;
};

#endif