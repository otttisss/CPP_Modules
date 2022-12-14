/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 01:06:59 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/27 01:15:40 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

int const Fixed::_bits = 8;
bool	Fixed::_verbose = false;

Fixed::Fixed(void): _value(0)
{
	if (Fixed::_verbose)
		std::cout << "Default construct called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &src)
{
	if (Fixed::_verbose)
		std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::~Fixed(void)
{
	if (Fixed::_verbose)
		std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	if (Fixed::_verbose)
		std::cout << "get Raw Bits" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	if (Fixed::_verbose)
		std::cout << "Set Raw" << std::endl;
	this->_value = raw;
	return ;
}

Fixed &Fixed::operator = (Fixed const &rhs)
{
	if (Fixed::_verbose)
		std::cout << "Copy assignment operator called " << std::endl;
	if (this != &rhs)
		this->_value = rhs.getRawBits();
	return (*this);
}

Fixed::Fixed(const int newValue)
{
	if (Fixed::_verbose)
		std::cout << "Int constructor called" << std::endl;
	this->_value = (newValue << _bits);
	return ;
}

Fixed::Fixed(const float f_nbr)
{
	if (Fixed::_verbose)
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

bool Fixed::operator < (Fixed const &rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator > (Fixed const &rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator <= (Fixed const &rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator >= (Fixed const &rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator != (Fixed const &rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

bool Fixed::operator == (Fixed const &rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

Fixed Fixed::operator+(Fixed const &rhs)
{
	Fixed result;
	result.setRawBits(this->getRawBits() + rhs.getRawBits());
	return (result);
}

Fixed Fixed::operator-(Fixed const &rhs)
{
	Fixed result;
	result.setRawBits(this->getRawBits() - rhs.getRawBits());
	return (result);
}

Fixed Fixed::operator*(Fixed const &rhs)
{
	Fixed result(this->toFloat() * rhs.toFloat());
	return (result);
}

Fixed Fixed::operator/(Fixed const &rhs)
{
	if (rhs._value == 0)
		return (*this);
	Fixed result(this->toFloat() / rhs.toFloat());
	return (result);
}

Fixed& Fixed::operator++(void)
{
	this->_value += 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed old(*this);
	this->_value += 1;
	return (old);
}

Fixed& Fixed::operator--(void)
{
	this->_value -= 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed old(*this);
	this->_value -= 1;
	return (old);
}

Fixed& Fixed::min(Fixed &lhs, Fixed &rhs)
{
	if (lhs.getRawBits() < rhs.getRawBits())
		return (lhs);
	else
		return (rhs);
}

const Fixed& Fixed::min(Fixed const &lhs, Fixed const &rhs)
{
	if (lhs.getRawBits() < rhs.getRawBits())
		return (lhs);
	else
		return (rhs);
}

Fixed& Fixed::max(Fixed &lhs, Fixed &rhs)
{
	if (lhs.getRawBits() > rhs.getRawBits())
		return (lhs);
	else
		return (rhs);
}

const Fixed& Fixed::max(Fixed const &lhs, Fixed const &rhs)
{
	if (lhs.getRawBits() > rhs.getRawBits())
		return (lhs);
	else
		return (rhs);
}

void Fixed::setVerbose(bool value)
{
	Fixed::_verbose = value;
}
