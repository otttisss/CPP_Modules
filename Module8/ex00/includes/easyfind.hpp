/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:56:03 by cmilagro          #+#    #+#             */
/*   Updated: 2022/11/03 17:08:24 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

class notFind: public std::exception
{
	virtual const char * what() const throw() {return ("Not find");};
};

template <typename T>

typename T::iterator easyFind(T &container, int toFind)
{
	typename T::iterator it = find(container.begin(), container.end(), toFind);
	if (it == container.end())
		throw notFind();
	return (it);
};

#endif