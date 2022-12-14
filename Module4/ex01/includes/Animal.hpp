/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 01:11:36 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/28 01:14:07 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public:

		Animal (void);
		Animal (Animal const &src);
		Animal (std::string type);
		virtual ~Animal(void);
		std::string getType(void) const;
		Animal& operator=(Animal const &rhs);
		virtual void makeSound(void) const;

	protected:
		
		std::string type;	
};

#endif