/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 22:18:02 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/28 22:40:57 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	
	public:

		WrongAnimal (void);
		WrongAnimal (WrongAnimal const &src);
		WrongAnimal (std::string type);
		virtual ~WrongAnimal(void);
		std::string getType(void) const;
		WrongAnimal& operator=(WrongAnimal const &rhs);
		void makeSound(void) const;

	protected:
		std::string type;	
};

#endif