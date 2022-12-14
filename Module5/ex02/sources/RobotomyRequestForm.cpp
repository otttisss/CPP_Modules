/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:24:12 by cmilagro          #+#    #+#             */
/*   Updated: 2022/11/01 16:01:06 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form("RobotomyRequestForm", 72, 45), _target("default")
{
	std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : Form("RobotomyRequsetForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm Name constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

std::string const &RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	if (this != &rhs)
	{
		Form::operator=(rhs);
		const std::string* namePtr = (std::string*)&this->_target;
		(void)namePtr;
		namePtr = &rhs._target;
	}
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	this->CheckExe(executor);
	std::cout << "Z Z Z Z Z Z Z Z Z, RRRRR R RRR" << std::endl;
	if (std::rand() & 2)
		std::cout << this->_target << " has been robotized" << std::endl;
	else
		std::cout << "Robotized has failed " << std::endl;
}