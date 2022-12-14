/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:38:55 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/24 20:06:27 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactClass.hpp"
#include "PhonebookClass.hpp"
#include <iostream>

int main()
{
	int			end;
	std::string	line;
	PhoneBook	phonebook;

	end = 1;
	while (end)
	{
		std::cout << "Phonebook->";
		std::getline(std::cin, line);
		if (std::cin.eof() == 1)
		{
			std::cout << std::endl;
			break ;
		}
		if (line == "ADD")
			phonebook.add_contact();
		else if (line == "SEARCH")
		{
			phonebook.show_all_contacts();
			phonebook.search_contact();
		}
		else if (line == "EXIT")
		{
			end = 0;
			std::cout << "exit" << std::endl;
		}
	}
	return (0);
}