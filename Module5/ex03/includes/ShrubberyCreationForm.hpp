/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:20:43 by cmilagro          #+#    #+#             */
/*   Updated: 2022/11/01 16:50:33 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Form.hpp"
# include <fstream>

class Bureaucrat;
class Form;

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm (void);
		ShrubberyCreationForm (std::string const &target);
		ShrubberyCreationForm (ShrubberyCreationForm const &src);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const &rhs);
		~ShrubberyCreationForm (void);
		std::string const &getTarget(void) const;
		void	execute(Bureaucrat const &executor) const;
		static Form *clone(std::string const target);
		
		class ErrorOpen: public std::exception
		{
			virtual const char *what() const throw();
		};
	
	private:
		static std::string const _tree;
		const std::string _target;
};

#endif