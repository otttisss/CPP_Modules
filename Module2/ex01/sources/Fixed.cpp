/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 22:41:31 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/26 00:46:38 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

int const Fixed::_bits = 8;

Fixed::Fixed(void): _value(0)
{
	std::cout << "Default construct called" << std::endl;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

Fixed &Fixed::operator = (Fixed const &rhs)
{
	std::cout << "Copy assignment operator called " << std::endl;
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return (*this);
}

Fixed::Fixed(const int newValue)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = (newValue << _bits);
	return ;
}

Fixed::Fixed(const float f_nbr)
{
	std::cout << "Float constructor called" << std::endl;
	this->_value = roundf((f_nbr * (1 << this->_bits)));
	return ;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (1 << this->_bits));
}

int	Fixed::toInt(void) const
{
	return (this->_value >> this->_bits);
}

std::ostream &operator << (std::ostream &ofs, Fixed const &instance)
{
	ofs << instance.toFloat();
	return (ofs);
}
