/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:23:36 by cmilagro          #+#    #+#             */
/*   Updated: 2022/11/03 17:44:27 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include "limits.h"
#include <algorithm>

Span::Span(void) : _size(0), _tab()
{
	
}

Span::Span(unsigned int const &n) : _size(n), _tab()
{
	
}

Span::~Span(void)
{
	
}

Span& Span::operator=(Span const &cpy)
{
	if (this != &cpy)
	{
		this->_size = cpy._size;
		this->_tab = cpy._tab;
	}
	return (*this);
}

void	Span::addNumber(const int &newNumber)
{
	if (_tab.size() >= this->_size)
		throw Span::sizeToBig();
	_tab.push_back(newNumber);
}

void	Span::addRangeNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if (_tab.size() + std::distance(start, end) > this->_size)
		throw Span::sizeToBig();
	_tab.insert(this->_tab.end(), start, end);
}

unsigned int Span::shortestSpan(void)
{
	if (this->_tab.size() > 1)
	{
		std::vector<int>::iterator end = this->_tab.end();
		std::vector<int>::iterator it = this->_tab.begin();
		unsigned int min = UINT_MAX;
		sort(this->_tab.begin(), this->_tab.end());
		for ( ; it < end; it++)
		{
			for (std::vector<int>::iterator it2 = (it + 1); it2 != end; it2++)
			{
				if (min > static_cast<unsigned int>(*it2 - *it))
					min = *it2 - *it;
			}
		}
		return (min);
	}
	else
		throw Span::notEnough();
}

unsigned int Span::longestSpan(void)
{
	sort(this->_tab.begin(), this->_tab.end());
	if (this->_tab.size() <= 1)
		throw Span::notEnough();
	return (*max_element(this->_tab.begin(), this->_tab.end()) - *min_element(this->_tab.begin(), this->_tab.end()));
}

std::vector<int> Span::getTab(void)
{
	return (this->_tab);
}