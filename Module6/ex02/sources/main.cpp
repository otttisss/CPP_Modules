/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:12:47 by cmilagro          #+#    #+#             */
/*   Updated: 2022/11/02 16:21:58 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "C.hpp"
#include "B.hpp"
#include "A.hpp"
#include <time.h>
#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <unistd.h>

Base * generate(void)
{
	sleep(1);
	int r = rand() % 3;
	if (r == 0)
		return (new A);
	if (r == 1)
		return (new B);
	else
		return (new C);
}

void	identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << " is A" << std::endl;
	if (dynamic_cast<B *>(p))
		std::cout << " is B" << std::endl;
	if (dynamic_cast<C *>(p))
		std::cout << " is C" << std::endl;
}

void	identify2(Base& p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		std::cout << " is A" << std::endl;
		(void) a;
		return ;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	try
	{
		B &b = dynamic_cast<B &>(p);
		std::cout << " is B" << std::endl;
		(void) b;
		return ;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	try
	{
		C &c = dynamic_cast<C &>(p);
		std::cout << " is C" << std::endl;
		(void) c;
		return ;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
}

int main(void)
{
	srand(time(NULL));
	for (int i = 0; i < 15; i++)
	{
		Base *base = generate();
		identify(base);
		identify2(*base);
	}
	return (0);
}