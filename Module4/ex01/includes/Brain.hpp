/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:16:41 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/31 16:29:17 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain 
{

	public:

		Brain (void);
		Brain (Brain const &src);
		~Brain (void);
		Brain& operator=(Brain const &rhs);
		
		std::string getIdeas(int index) const;
		void	setIdeas(std::string ideas);
	
	protected:

		std::string _ideas[100];
};

std::ostream &operator<<(std::ostream &out, Brain const &rhs);

#endif