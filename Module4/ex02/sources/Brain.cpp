/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:24:46 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/31 16:32:07 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
	*this = src;
	std::cout << "Brain Copy constructor called" << std::endl;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain& Brain::operator=(Brain const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs.getIdeas(i);
	}
	return (*this);
}

void	Brain::setIdeas(std::string ideas)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = ideas;
}

std::string Brain::getIdeas(int index) const
{
	return (this->_ideas[index]);
}

std::ostream &operator<<(std::ostream &out, Brain const &rhs)
{
	for (int i = 0; i < 100; i++)
		out << rhs.getIdeas(i) << std::endl;
	return (out);
}
