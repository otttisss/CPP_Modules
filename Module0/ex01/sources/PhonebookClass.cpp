/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:45:54 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/24 21:30:41 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhonebookClass.hpp"

PhoneBook::PhoneBook(void)
{
	this->num_of_users = 0;
}

void PhoneBook::add_contact(void)
{
	this->num_of_users++;
	if (this->num_of_users <= 8)
		this->contacts[this->num_of_users - 1].set_contact(this->num_of_users);
	else
		this->contacts[this->num_of_users % 8 - 1].set_contact(this->num_of_users % 8);
}

void PhoneBook::search_contact(void)
{
	int	index;
	int	end;

	end = 1;
	if (this->num_of_users == 0)
		std::cout << "Add a contact before searching" << std::endl;
	else
	{
		std::cout << "> Please, enter an index for search a contact" << std::endl;
		while (end)
		{
			std::cout << ">";
			std::cin >> index;
			if (std::cin.eof() == 1)
			{
				std::cout << std::endl;
				std::cin.clear();
				std::cin.ignore(1, '\n');
				break ;
			}
			if (index < 1 || (index > this->num_of_users || index > 8))
				std::cout << "Invalid index" << std::endl;
			else
			{
				this->contacts[index - 1].display_just_me();
				end = 0;
			}
			std::cin.clear();
			std::cin.ignore(2048, '\n');
		}
	}
}

void PhoneBook::show_all_contacts(void)
{
	std::cout << "|--------------------------------------------|" << std::endl;
	std::cout << "| index | First Name | Last Name | Nick Name |" << std::endl;
	std::cout << "|--------------------------------------------|" << std::endl;
	for (int i = 0; i < this->num_of_users && i < 8; i++)
		this->contacts[i].display_all();
	std::cout << "|--------------------------------------------|" << std::endl;
}