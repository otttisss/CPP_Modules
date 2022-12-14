/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 23:03:22 by cmilagro          #+#    #+#             */
/*   Updated: 2022/11/01 14:46:19 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _name("default"), _signed(0), _SignedGrade(150), _ExeGrade(150)
{
	std::cout << "Form Default constructor called" << std::endl;
}

Form::Form(std::string const &name, unsigned int SignedGrade, unsigned int ExeGrade): _name(name), _signed(0), _SignedGrade(SignedGrade), _ExeGrade(ExeGrade)
{
	if (this->_SignedGrade < 1 || this->_ExeGrade < 1)
		throw Form::GradeTooHighException();
	if (this->_SignedGrade > 150 || this->_ExeGrade > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form Name constructor called" << std::endl;
}

Form::~Form(void)
{
	std::cout << "Form Destructor called" << std::endl;
}

Form& Form::operator=(Form const &rhs)
{
	if (this != &rhs)
	{
		const std::string* namePtr = (std::string*)&this->_name;
		(void)namePtr;
		namePtr = &rhs._name;
		this->_signed = rhs._signed;
		this->_SignedGrade = rhs._SignedGrade;
		this->_ExeGrade = rhs._ExeGrade;
	}
	return (*this);
}

std::string const &Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getSigned(void) const
{
	return (this->_signed);
}

unsigned int Form::getSignedGrade(void) const
{
	return (this->_SignedGrade);
}

const char * Form::IsSigned::what() const throw()
{
	return ("Not Signed\n");
}

unsigned int Form::getExeGrade(void) const
{
	return (this->_ExeGrade);
}

const char * Form::GradeTooHighException::what() const throw()
{
	return ("Grade Too High\n");
}

const char * Form::GradeTooLowException::what() const throw()
{
	return ("Grade Too Low\n");
}

void	Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrad() > this->_SignedGrade)
		throw Form::GradeTooLowException();
	this->_signed = 1;
}

std::ostream &operator<<(std::ostream &ofs, Form const &rhs)
{
	ofs << "[" << rhs.getName() << "], "
	<< "Signed [" << rhs.getSigned() << "] "
	<< "Signed grade [" << rhs.getSignedGrade()
	<< "] " << "Exe grade [" << rhs.getExeGrade() << "] "
	<< std::endl;
	return (ofs);
}

void	Form::CheckExe(Bureaucrat const &Bureaucrat) const
{
	if (!this->_signed)
		throw Form::IsSigned();
	if (Bureaucrat.getGrad() > this->_ExeGrade)
		throw Form::GradeTooLowException();
}