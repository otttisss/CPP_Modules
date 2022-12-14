/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvScal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:22:15 by cmilagro          #+#    #+#             */
/*   Updated: 2022/11/01 23:34:10 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVSCAL_HPP
# define CONVSCAL_HPP

# include <iostream>
# include <limits>
# include <errno.h>
# include <cstdlib>
# include <iomanip>

class ConvScal
{
	public:
		ConvScal(std::string &newVal);
		ConvScal(ConvScal &src);
		ConvScal& operator=(ConvScal const &rhs);
		~ConvScal();

		void	convertChar(std::string &newVal);
		void	convertInt(std::string &newVal);
		void	convertFloat(std::string &newVal);
		void	convertDouble(std::string &newVal);
		void	checkOverflow(std::string &newVal);
		bool	isInt(std::string &newVal);
		bool	isChar(std::string &newVal);
		bool	isDouble(std::string &newVal);
		bool	isFloat(std::string &newVal);
		void	print(void);
		void	printChar(void);
		void	printInt(void);
		void	printFloat(void);
		void	printDouble(void);
		bool	isException(std::string &newValue);
		
		typedef enum e_type{
			DEFAULT,
			CHAR,
			INT,
			FLOAT,
			DOUBLE
		} type;
		
		char	getCval(void) const;
		int		getIval(void) const;
		float	getFval(void) const;
		double	getDval(void) const;
		type	getType(void) const;
		
		class unknownType : public std::exception
		{
			public:
				virtual const char * what() const throw();	
		};
	
	private:
		char	_cVal;
		int		_iVal;
		float	_fVal;
		double	_dVal;
		int		_precision;
		bool	_pinf;
		bool	_minf;
		bool	_nan;
		bool	_error;
		bool	_charOver;
		bool	_intOver;
		bool	_floatOver;
		type	_type;
		ConvScal(void);	
};

#endif