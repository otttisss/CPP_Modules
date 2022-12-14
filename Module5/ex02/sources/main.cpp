/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 22:00:33 by cmilagro          #+#    #+#             */
/*   Updated: 2022/11/01 16:26:44 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include "unistd.h"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include <time.h>
#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	std::srand(time(NULL));
	std::cout << "----TEST Shrubbery---" << std::endl;
	{
		std::cout << "test 1 can signed and exexute" << std::endl;
		try {
				ShrubberyCreationForm b1("toto");
				Bureaucrat Michu("Madame Michu", 3);
				Michu.signForm(b1);
				Michu.executeForm(b1);
				std::cout << b1;
		} 
		catch (std::exception &e){std::cout << e.what();}
		
	}
	std::cout << std::endl;
	{
		std::cout << "test 2 can signed and can't exexute" << std::endl;
		try {
				ShrubberyCreationForm b1("toto");
				Bureaucrat Michu("Madame Michu", 145);
				Michu.signForm(b1);
				Michu.executeForm(b1);
				std::cout << b1;
		} 
		catch (std::exception &e){std::cout << e.what();}
		
	}	
	std::cout << std::endl;
	{
		std::cout << "test 3 can signed and can't exexute" << std::endl;
		try {
				ShrubberyCreationForm b1("toto");
				Bureaucrat Michu("Madame Michu", 146);
				Michu.signForm(b1);
				Michu.executeForm(b1);
				std::cout << b1;
		} 
		catch (std::exception &e){std::cout << e.what();}
		
	}
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "----TEST Robotomy---" << std::endl;
	{
		std::cout << "test 1 can signed and exexute" << std::endl;
		try {
				RobotomyRequestForm b1("tata");
				Bureaucrat Michu("Madame Michu", 3);
				Michu.signForm(b1);
				Michu.executeForm(b1);
				std::cout << b1;
		} 
		catch (std::exception &e){std::cout << e.what();}
		
	}
	std::cout << std::endl;
	{
		std::cout << "test 2 can signed and can't exexute" << std::endl;
		try {
				RobotomyRequestForm b1("tata");
				Bureaucrat Michu("Madame Michu", 72);
				Michu.signForm(b1);
				Michu.executeForm(b1);
				std::cout << b1;
		} 
		catch (std::exception &e){std::cout << e.what();}
		
	}
	std::cout << std::endl;
	{
		std::cout << "test 3 can signed and can't exexute" << std::endl;
		try {
				RobotomyRequestForm b1("tata");
				Bureaucrat Michu("Madame Michu", 146);
				Michu.signForm(b1);
				Michu.executeForm(b1);
				std::cout << b1;
		} 
		catch (std::exception &e){std::cout << e.what();}
		
	}
	std::cout << std::endl;
	{
		usleep(100);
		std::cout << "test 4 another test for random" << std::endl;
		try {
				RobotomyRequestForm b1("tata");
				Bureaucrat Michu("Madame Michu", 3);
				Michu.signForm(b1);
				Michu.executeForm(b1);
				std::cout << b1;
		} 
		catch (std::exception &e){std::cout << e.what();}
		
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "----TEST Presidential---" << std::endl;
	{
		std::cout << "test 1 can signed and exexute" << std::endl;
		try {
				PresidentialPardonForm b1("titi");
				Bureaucrat Michu("Madame Michu", 3);
				Michu.signForm(b1);
				Michu.executeForm(b1);
				std::cout << b1;
		} 
		catch (std::exception &e){std::cout << e.what();}
		
	}
	std::cout << std::endl;
	{
		std::cout << "test 2 can signed and can't exexute" << std::endl;
		try {
				PresidentialPardonForm b1("titi");
				Bureaucrat Michu("Madame Michu", 24);
				Michu.signForm(b1);
				Michu.executeForm(b1);
				std::cout << b1;
		} 
		catch (std::exception &e){std::cout << e.what();}
		
	}
	std::cout << std::endl;
	{
		std::cout << "test 3 can signed and can't exexute" << std::endl;
		try {
				PresidentialPardonForm b1("titi");
				Bureaucrat Michu("Madame Michu", 26);
				Michu.signForm(b1);
				Michu.executeForm(b1);
				std::cout << b1;
		} 
		catch (std::exception &e){std::cout << e.what();}
		
	}
}