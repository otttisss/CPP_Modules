/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:34:45 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/26 00:36:09 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

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

		int			getRawBits(void) const;
		void		setRawBits(int const raw);
		float		toFloat(void) const;
		int			toInt(void) const;
	
	private:
		int					_value;
		static const int	_bits;
};

std::ostream &operator << (std::ostream &ofs, Fixed const &instance);

#endif