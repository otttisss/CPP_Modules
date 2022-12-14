/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 22:52:16 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/31 23:02:48 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form (void);
		Form (std::string const &name, unsigned int SignedGrade, unsigned int ExeGrade);
		Form (Form const &src);
		Form& operator=(Form const &rhs);
		~Form (void);
		std::string const &getName(void) const;
		unsigned int	getSignedGrade(void) const;
		unsigned int	getExeGrade(void) const;
		bool			getSigned(void) const;
		void			beSigned(Bureaucrat const &bureaucrat);
		
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char * what() const throw();
		};
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char * what() const throw();
		};

	private:
		const std::string	_name;
		bool				_signed;
		unsigned int		_SignedGrade;
		unsigned int		_ExeGrade;
};

std::ostream &operator<<(std::ostream &out, Form const &rhs);

#endif