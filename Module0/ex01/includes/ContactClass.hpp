/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:16:11 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/24 21:26:10 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <iostream>
# include <iomanip>
# include <string>

class Contact {
	
	public:
		Contact();
		~Contact();
		void set_contact(int index);
		void display_all(void);
		void display_just_me(void);
		
	private:
	
	std::string fields[5];
	static std::string fields_name[5];

	int	index;
	enum Field {
		first_name,
		last_name,
		nick_name,
		phone_number,
		darkest_secret
	};
};

#endif