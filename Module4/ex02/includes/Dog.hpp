/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 22:08:00 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/31 17:31:08 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{

	public:

		Dog (void);
		Dog (Dog const &src);
		virtual ~Dog(void);
		Dog& operator=(Dog const &rhs);

		virtual void makeSound(void) const;
		virtual	Brain* getBrain(void) const;

	private:

		Brain	*_brain;

};

#endif