/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:49:26 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/27 01:17:25 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const &src);
		~Fixed(void);
		Fixed&	operator=(Fixed const &rhs);
		Fixed(const int newValue);
		Fixed(const  float f_nbr);
		Fixed operator + (Fixed const &rhs);
		Fixed operator - (Fixed const &rhs);
		Fixed operator * (Fixed const &rhs);
		Fixed operator / (Fixed const &rhs);
		Fixed& operator++ (void);
		Fixed operator++(int);
		Fixed& operator--(void);
		Fixed operator--(int);

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		static void 		setVerbose(bool value);
		float				toFloat(void) const;
		int					toInt(void) const;
		bool				operator < (Fixed const &rhs) const;
		bool				operator > (Fixed const &rhs) const;
		bool				operator >= (Fixed const &rhs) const;
		bool				operator <= (Fixed const &rhs) const;
		bool				operator != (Fixed const &rhs) const;
		bool				operator == (Fixed const &rhs) const;
		static Fixed		&min(Fixed &lhs, Fixed &rhs);
		static const Fixed	&min(Fixed const &lhs, Fixed const &rhs);
		static Fixed		&max(Fixed &lhs, Fixed &rhs);
		static const Fixed	&max(Fixed const &lhs, Fixed const &rhs);
	
	private:
		int					_value;
		static const int	_bits;
		static bool			_verbose;
};

std::ostream &operator << (std::ostream &ofs, Fixed const &instance);

#endif