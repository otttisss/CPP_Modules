/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:20:29 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/31 18:13:07 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
	
	public:

		AAnimal (void);
		AAnimal (AAnimal const &src);
		AAnimal (std::string type);
		virtual ~AAnimal (void);
		
		std::string getType(void) const;
		AAnimal& operator=(AAnimal const &rhs);
		virtual void makeSound(void) const = 0;

	protected:

		std::string type;
};

#endif