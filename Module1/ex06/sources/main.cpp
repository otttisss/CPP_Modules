/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:41:29 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/25 17:11:36 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;
	
	if (argc != 2)
	{
		std::cout << "Usage: [Level]" << std::endl;
		std::cout << "Level type: [DEBUG], [INFO], [WARNING], [ERROR]" << std::endl;
		return (1);
	}
	else
	{
		std::string buff(argv[1]);
		harl.complain(buff);
	}
	return (0);
}