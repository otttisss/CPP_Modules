/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 20:39:39 by cmilagro          #+#    #+#             */
/*   Updated: 2022/11/03 21:06:20 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
	
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &rhs) : std::stack<T>(rhs)
{
    *this = rhs;
}

template<typename T>
MutantStack<T>::~MutantStack()
{
    
}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(MutantStack<T> const &rhs)
{
    if (*this != rhs)
        this->c = rhs.c;
    return (*this);
}

template<typename T>
typename::MutantStack<T>::iterator MutantStack<T>::begin()
{
    return (this->c.begin());
}

template<typename T>
typename::MutantStack<T>::iterator MutantStack<T>::end()
{
    return (this->c.end());
}

template<typename T>
typename::MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
    return (this->c.begin());
}

template<typename T>
typename::MutantStack<T>::const_iterator MutantStack<T>::end() const
{
    return (this->c.end());
}

template<typename T>
typename::MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
    return (this->c.rbegin());
}

template<typename T>
typename::MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
    return (this->c.rend());
}

template<typename T>
typename::MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const
{
    return (this->c.rbegin());
}

template<typename T>
typename::MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const
{
    return (this->c.rend());
}

#endif