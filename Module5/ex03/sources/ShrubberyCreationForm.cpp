/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:40:25 by cmilagro          #+#    #+#             */
/*   Updated: 2022/11/01 16:50:59 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

std::string const ShrubberyCreationForm::_tree = "                          .         ;\n            .              .              ;%     ;;\n              ,           ,                :;%  %;   \n               :         ;                   :;%;'     .,\n      ,.        %;     %;            ;        %;'    ,;\n        ;       ;%;  %%;        ,     %;    ;%;    ,%'\n         %;       %;%;      ,  ;       %;  ;%;   ,%;'\n           ;%;      %;        ;%;        % ;%;  ,%;'\n           `%;.     ;%;     %;'         `;%%;.%;'\n            `:;%.    ;%%. %@;        %; ;@%;%'\n               `:%;.  :;bd%;          %;@%;'\n                 `@%:.  :;%.         ;@@%;'\n                   `@%.  `;@%.      ;@@%;\n                     `@%%. `@%%    ;@@%;\n                       ;@%. :@%%  %@@%;\n                         %@bd%%%bd%%:;\n                           #@%%%%%:;;\n                           %@@%%%::;\n                           %@@@%(o);  . '\n                           %@@@o%;:(.,'\n                       `.. %@@@o%::;\n                          `)@@@o%::;\n                           %@@(o)::;\n                          .%@@@@%::;\n                          ;%@@@@%::;.\n                         ;%@@@@%%:;;;.\n                     ...;%@@@@@%%:;;;;,..\n " ;

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("ShrubberyCreationForm", 145, 137), _target("default")
{
	std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm Name constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	if (this != &rhs)
	{
		Form::operator=(rhs);
		const std::string* namePtr = (std::string*)&this->_target;
		(void) namePtr;
		namePtr = &rhs._target;
	}
	return (*this);
}

std::string const &ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	this->CheckExe(executor);
	std::string outFileName = this->_target;
	outFileName += "_shrubbery";
	std::ofstream outfile (outFileName.c_str());
	if (!outfile.is_open())
		throw ShrubberyCreationForm::ErrorOpen();
	outfile << this->_tree;
	outfile.close();
}

const char * ShrubberyCreationForm::ErrorOpen::what() const throw()
{
	return ("Open Error\n");
}

Form *ShrubberyCreationForm::clone(std::string const target)
{
	return (new ShrubberyCreationForm(target));
}