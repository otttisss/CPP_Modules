/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:33:59 by cmilagro          #+#    #+#             */
/*   Updated: 2022/11/01 16:47:32 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Form;

class Intern
{
	public:
		Intern (void);
		Intern (Intern const &src);
		Intern& operator=(Intern const &rhs);
		~Intern (void);
		Form* makeForm(std::string typeForm, std::string target);

		class unknownType: public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
	private:
		static std::string _request[3];
};

#endif