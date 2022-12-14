/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 00:43:39 by cmilagro          #+#    #+#             */
/*   Updated: 2022/11/06 16:01:22 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
	Data	d1;
	
	d1.data = 42;
	std::cout << "source address: " << &d1 << " value: " << d1.data << std::endl;
	uintptr_t uptr = serialize(&d1);
	std::cout << "uintptr address: " << uptr << std::endl;
	
	Data	*ptr_d;
	
	ptr_d = deserialize(uptr);
	std::cout << "ptr_d address: " << ptr_d << " value: " << ptr_d->data << std::endl;
	return (0);
}