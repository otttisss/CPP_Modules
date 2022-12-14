/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:34:23 by cmilagro          #+#    #+#             */
/*   Updated: 2022/11/01 16:56:22 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <string>

std::string Intern::_request[3] = {
	"presidential pardon",
	"robotomy request",
	"shrubbery creation",
};

Intern::Intern()
{
	
}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Intern::~Intern()
{

}

Intern& Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return (*this);
}

Form* Intern::makeForm(std::string typeForm, std::string target)
{
	Form* (*f[3])(std::string const target) = {
		PresidentialPardonForm::clone,
		RobotomyRequestForm::clone,
		ShrubberyCreationForm::clone,
	};
	
	for (int i = 0; i < 3; i++)
	{
		if (typeForm == this->_request[i])
		{
			std::cout << "Intern creates " << this->_request[i] << std::endl;
			return (f[i](target));
		}
	}
	throw Intern::unknownType();
	return (NULL);
}

const char * Intern::unknownType::what() const throw()
{
	return ("I don't know the form, please forgive meeeeeee 😰\n");
}