/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:20:55 by cmilagro          #+#    #+#             */
/*   Updated: 2022/11/01 16:48:14 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <fstream>
# include <cstdlib>
# include "Form.hpp"

class Bureaucrat;
class Form;

class PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm (void);
		PresidentialPardonForm (std::string const &target);
		PresidentialPardonForm (PresidentialPardonForm const &src);
		PresidentialPardonForm& operator=(PresidentialPardonForm const &rhs);
		~PresidentialPardonForm (void);
		std::string const &getTarget(void) const;
		void	execute(Bureaucrat const &executor) const;
		static Form *clone(std::string const target);
	
	private:
		const std::string _target;
};

#endif