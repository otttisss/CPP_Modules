/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:34:45 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/25 23:56:40 by cmilagro         ###   ########.fr       */
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
		int			getRawBits(void) const;
		void		setRawBits(int const raw);
		Fixed&	operator=(Fixed const &rhs);
	
	private:
		int					_value;
		static const int	_bits = 8;
};

#endif