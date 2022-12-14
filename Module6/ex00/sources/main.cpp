/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 00:35:22 by cmilagro          #+#    #+#             */
/*   Updated: 2022/11/02 00:38:24 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ConvScal.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		try
		{
			std::string s(argv[1]);
			ConvScal conv(s);
			conv.print();
		}
		catch(std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	else
		std::cout << "Converter usage : [int] or [char] or [float] or [double]" << std::endl;
	return (0);
}