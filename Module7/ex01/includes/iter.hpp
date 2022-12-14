/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:55:40 by cmilagro          #+#    #+#             */
/*   Updated: 2022/11/02 17:00:42 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template<typename T>

void	iter(T *tab, size_t size, void(f)(T &tab))
{
	for (size_t i = 0; i < size; i++)
		f(*(tab + i));
}	

template<typename T>

void	print(T content)
{
	std::cout << "[" << content << "]";
}

#endif