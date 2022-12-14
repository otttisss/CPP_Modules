/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:41:20 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/25 17:14:46 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>

std::string Harl::cmp[4] = {
	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR",
};

Harl::Harl()
{

};

Harl::~Harl()
{

};

void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (level == this->cmp[i])
			return (Harl::filterHarl(i));
	}
	return (this->defaultMessage());
}

void	Harl::debug(void)
{
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!"
	<< std::endl;
}

void	Harl::info(void)
{
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!"
	<< std::endl;
}

void	Harl::warning(void)
{
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month."
	<< std::endl;
}

void	Harl::error(void)
{
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now."
	<< std::endl;
}

void	Harl::defaultMessage(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]"
	<< std::endl;
}

void	Harl::filterHarl(int level)
{
	switch (level)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break ;
		default:
			this->defaultMessage();
	}
}