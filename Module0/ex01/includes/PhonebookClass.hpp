/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:46:27 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/24 19:49:10 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include <iostream>
# include <iomanip>
# include <string>
# include "ContactClass.hpp"

class PhoneBook{
	
	public:
		PhoneBook();
		void add_contact(void);
		void search_contact(void);
		void show_all_contacts(void);
	private:
		Contact contacts[8];
		int		num_of_users;
};

#endif