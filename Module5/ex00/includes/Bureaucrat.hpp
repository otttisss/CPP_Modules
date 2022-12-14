/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 21:23:57 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/31 21:40:09 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	private:
	
		std::string const	_name;
		unsigned int		_grade;
	
	public:
		Bureaucrat(void);
		~Bureaucrat(void);
		Bureaucrat (std::string const &name, unsigned int grade);
		Bureaucrat (Bureaucrat const &src);
		Bureaucrat& operator=(Bureaucrat const &rhs);
		
		std::string const	getName(void) const;
		unsigned int		getGrad(void ) const;
		void				promote(void);
		void				destitute(void);
		
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
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &rhs);

#endif