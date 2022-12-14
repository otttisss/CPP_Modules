/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:40:23 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/31 22:40:46 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("default"), _grade(150)
{
	std::cout << "Bureaucrat Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const &name, unsigned int grade): _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Bureaucrat Name constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
	{
		const std::string* namePtr = (std::string*)&this->_name;
		(void)namePtr;
		namePtr = &rhs._name;
		this->_grade = rhs._grade;
	}
	return (*this);
}

std::string const Bureaucrat::getName(void) const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrad(void) const
{
	return (this->_grade);
}

void	Bureaucrat::promote(void)
{
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::destitute(void)
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

const char * Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade Too High\n");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low\n");
}

std::ostream &operator<<(std::ostream &ofs, Bureaucrat const &rhs)
{
	ofs << "[" << rhs.getName() << "], "
	<< "Bureaucrat grade [" << rhs.getGrad() << "]" << std::endl;
	
	return (ofs);
}