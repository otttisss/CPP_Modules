/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ConvScal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 23:34:40 by cmilagro          #+#    #+#             */
/*   Updated: 2022/11/06 17:03:50 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConvScal.hpp"

ConvScal::ConvScal(void)
{

}

ConvScal::ConvScal(std::string &newVal) : _precision(1), _pinf(0), _minf(0), _nan(0), _charOver(0), _intOver(0), _floatOver(0)
{
	if (newVal.length() == 0)
		throw ConvScal::unknownType();
	if (isException(newVal))
	{
		this->_intOver = 1;
		this->_charOver = 1;
	}
	else if (ConvScal::isChar(newVal))
		this->convertChar(newVal);
	else if (ConvScal::isInt(newVal))
		this->convertInt(newVal);
	else if (ConvScal::isFloat(newVal))
		this->convertFloat(newVal);
	else if (ConvScal::isDouble(newVal))
		this->convertDouble(newVal);
	else
		throw ConvScal::unknownType();
}

ConvScal::ConvScal(ConvScal &src)
{
	*this = src;
}

ConvScal& ConvScal::operator=(ConvScal const &rhs)
{
	if (this != &rhs)
	{
		this->_cVal = rhs._cVal;
		this->_iVal = rhs._iVal;
		this->_fVal = rhs._fVal;
		this->_precision = rhs._precision;
		this->_pinf = rhs._pinf;
		this->_minf = rhs._minf;
		this->_error = rhs._error;
		this->_charOver = rhs._charOver;
		this->_intOver = rhs._intOver;
		this->_floatOver = rhs._floatOver;
		this->_type = rhs._type;
	}
	return (*this);
}

ConvScal::~ConvScal()
{
	
}

void	ConvScal::convertChar(std::string &newVal)
{
	this->checkOverflow(newVal);
	this->_cVal = static_cast<int>(this->_cVal + 1);
	this->_iVal = static_cast<int>(this->_cVal);
	this->_fVal = static_cast<float>(this->_cVal);
	this->_dVal = static_cast<double>(this->_cVal);
	this->_type = CHAR;
}

void	ConvScal::convertFloat(std::string &newVal)
{
	this->checkOverflow(newVal);
	this->_fVal = strtof(newVal.c_str(), NULL);
	this->_iVal = static_cast<int>(this->_fVal);
	this->_cVal = static_cast<char>(this->_fVal);
	this->_dVal = static_cast<double>(this->_fVal);
	this->_type = FLOAT;
}

void	ConvScal::convertInt(std::string &newVal)
{
	this->checkOverflow(newVal);
	this->_iVal = atoi(newVal.c_str());
	this->_cVal = static_cast<char>(this->_iVal);
	this->_fVal = static_cast<float>(this->_iVal);
	this->_dVal = static_cast<double>(this->_iVal);
	this->_type = INT;
}

void	ConvScal::convertDouble(std::string &newVal)
{
	this->checkOverflow(newVal);
	this->_dVal = strtod(newVal.c_str(), NULL);
	this->_iVal = static_cast<int>(this->_dVal);
	this->_fVal = static_cast<float>(this->_dVal);
	this->_cVal = static_cast<char>(this->_dVal);
	this->_type = DOUBLE;
}

void	ConvScal::print(void)
{
	this->printChar();
	this->printDouble();
	this->printInt();
	this->printFloat();
}

void	ConvScal::checkOverflow(std::string &newVal)
{
	double nb;

	nb = strtod(newVal.c_str(), NULL);
	if (errno != 0)
		this->_error = 1;
	if (nb < INT_MIN || nb > INT_MAX)
		this->_intOver = 1;
	if (nb < CHAR_MIN || nb > CHAR_MAX)
		this->_charOver = 1;
	if (nb <= std::numeric_limits<float>::max() * -1 || nb > std::numeric_limits<float>::max())
		this->_floatOver = 1;
}

bool	ConvScal::isInt(std::string &newVal)
{
	double nb;

	for (size_t i = 0; i < newVal.length(); i++)
	{
		if (i == 0 && newVal[i] == '-')
			continue;
		if (isdigit(newVal[i] == false))
			return (false);
	}
	nb = strtod(newVal.c_str(), NULL);
	if (errno != 0)
		this->_error = 1;
	if  (nb < INT_MIN || nb > INT_MAX)
		return (false);
	return (true);
}

bool	ConvScal::isChar(std::string &newVal)
{
	if (newVal.size() == 3 && newVal[0] == '\'' && newVal[2] == '\'' && std::isprint(newVal[1]))
		return (true);
	return (false);
}

bool	ConvScal::isDouble(std::string &newVal)
{
	int	point = 0;
	long double nb = 0;

	for (size_t i = 0; i < newVal.length(); i++)
	{
		if (i == 0 && (newVal[i] == '-' || newVal[i] == '+'))
			continue;
		if (newVal[i] == '.' && (i == 0 || point == 1))
			return (false);
		if (newVal[i] == '.')
		{
			point = 1;
			continue;
		}
		if (isdigit(newVal[i]) == false)
			return (false);
		if (point)
			this->_precision++;
	}
	if (nb <= std::numeric_limits<double>::max() * -1 || nb > std::numeric_limits<double>::max())
		return (false);
	return (true);
}

bool	ConvScal::isFloat(std::string &newVal)
{
	int	point = 0;
	double nb = 0;

	for (size_t i = 0; i < newVal.length(); i++)
	{
		if (i == 0 && (newVal[i] == '-' || newVal[i] == '+'))
			continue;
		if (newVal[i] == '.' && (i == 0 || point == 1 || (newVal[i + 1] && newVal[i + 1] == 'f')))
			return (false);
		if (newVal[i] == '.')
		{
			point = 1;
			continue;
		}
		if (newVal[i] == 'f' && i == newVal.length() - 1 && newVal.length() != 1 && point == 1)
			continue;
		if (isdigit(newVal[i]) == false)
			return (false);
		if (point)
			this->_precision++;
	}
	nb = strtod(newVal.c_str(), NULL);
	if (errno != 1)
		this->_error = 1;
	if (nb <= std::numeric_limits<float>::max() * -1 || nb > std::numeric_limits<float>::max())
		return (false);
	return (true);
}

void	ConvScal::printChar(void)
{
	std::cout << "char: ";
	if (this->_charOver)
		std::cout << "impossible" << std::endl;
	else if (std::isprint(static_cast<int>(this->_cVal)) == false)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << this->_cVal << "'" << std::endl;
}

void	ConvScal::printInt(void)
{
	std::cout << "int: ";
	if (this->_intOver)
		std::cout << "impossible" << std::endl;
	else
		std::cout << this->_iVal << std::endl;
}

void	ConvScal::printFloat(void)
{
	std::cout << "float: ";
	if (this->_nan)
		std::cout << "nanf" << std::endl;
	else if (this->_minf)
		std::cout << "-inff" << std::endl;
	else if (this->_pinf)
		std::cout << "+inff" << std::endl;
	else if (this->_floatOver)
		std::cout << "impossible" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(this->_precision) << this->_fVal << "f" << std::endl;
}

void	ConvScal::printDouble(void)
{
	std::cout << "double: ";
	if (this->_nan)
		std::cout << "nan" << std::endl;
	else if (this->_minf)
		std::cout << "-inf" << std::endl;
	else if (this->_pinf)
		std::cout << "+inf" << std::endl;
	else
		std::cout << std::fixed << std::setprecision(this->_precision) << this->_dVal << std::endl;
}

bool	ConvScal::isException(std::string &newValue)
{
	if (newValue == "nan" || newValue == "nanf")
		this->_nan = 1;
	if (newValue == "+inf" || newValue == "+inff")
		this->_pinf = 1;
	if (newValue == "-inf" || newValue == "-inff")
		this->_minf = 1;
	if (this->_minf || this->_pinf || this->_nan)
		return (true);
	return (false);
}

char	ConvScal::getCval(void) const
{
	return (this->_cVal);
}

int	ConvScal::getIval(void) const
{
	return (this->_iVal);
}

float	ConvScal::getFval(void) const
{
	return (this->_fVal);
}

double	ConvScal::getDval(void) const
{
	return (this->_dVal);
}

ConvScal::type ConvScal::getType(void) const
{
	return (this->_type);
}

const char * ConvScal::unknownType::what() const throw()
{
	return ("Not valid string\n");
}