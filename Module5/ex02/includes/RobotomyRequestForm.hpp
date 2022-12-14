/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:18:21 by cmilagro          #+#    #+#             */
/*   Updated: 2022/11/01 15:31:54 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <iostream>
# include <fstream>
# include <cstdlib>

class Bureaucrat;
class Form;

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm (void);
		RobotomyRequestForm (std::string const &target);
		RobotomyRequestForm (RobotomyRequestForm const &src);
		RobotomyRequestForm& operator=(RobotomyRequestForm const &rhs);
		~RobotomyRequestForm (void);
		std::string const &getTarget(void) const;
		void	execute(Bureaucrat const &executor) const;

	private:
		const std::string _target;	
};

#endif