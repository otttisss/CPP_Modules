/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 15:37:31 by cmilagro          #+#    #+#             */
/*   Updated: 2022/10/25 16:25:08 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Replace.hpp"

int main(int argc, char **argv)
{
	Replace replace;
	
	if (argc != 4)
	{
		std::cerr << "Wrong number of arguments" << std::endl;
		return (1);
	}
	else
	{
		std::string argv1 = argv[1];
		std::string argv2 = argv[2];
		std::string argv3 = argv[3];
		if (argv1 == "" || argv2 == "" || argv3 == "")
			return (std::cout << "Empty string" << std::endl, 1);
		if (replace.setFile(argv[1]) == false)
			return (1);
		replace.replaceFIle(argv[2], argv[3]);
	}
	return (0);
}