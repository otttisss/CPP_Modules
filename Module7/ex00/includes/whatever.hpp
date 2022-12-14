/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:34:27 by cmilagro          #+#    #+#             */
/*   Updated: 2022/11/02 16:37:26 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template< typename T >

void	swap(T &t1, T &t2)
{
	T tmp;

	tmp = t2;
	t2 = t1;
	t1 = tmp;
}

template< typename T >
T& min(T &t1, T &t2)
{
	if (t1 < t2)
		return (t1);
	return (t2);
}

template< typename T >
T& max(T &t1, T &t2)
{
	if (t2 < t1)
		return (t1);
	return (t2);
}

#endif