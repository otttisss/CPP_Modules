/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 16:37:46 by cmilagro          #+#    #+#             */
/*   Updated: 2022/11/06 19:15:26 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <iomanip>

#define MAX_VAL 750
int main(int, char**)
{
    std::cout << "MAIN TEST" << std::endl;
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }

    std::cout << "ERROR" << std::endl;
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;


    std::cout << "MY TEST" << std::endl;
    std::cout << "test int" << std::endl;
    try{
        Array<int> tab(10);
        for (int i = 0; i < 10; i++)
        {
            const int value = rand();
            std::cout << "add: [" << value << "]" << std::endl; 
            tab[i] = value;
        }
         for (int i = 0; i < 10; i++)
        {
            const int value = rand();
            std::cout << "print: [" << tab[i] << "]" << std::endl; 
            tab[i] = value;
        }
    }
    catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << std::endl;
	}   

    std::cout << "test float" << std::endl;
    try{
        Array<float> tab(10);
        for (int i = 0; i < 10; i++)
        {
            const float value = rand();
            std::cout << "add: [" << value << "]" << std::endl; 
            tab[i] = value;
        }
         for (int i = 0; i < 10; i++)
        {
            const int value = rand();
            std::cout << "print: [" << tab[i] << "]" << std::endl; 
            tab[i] = value;
        }
    }
    catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << std::endl;
	}
	 std::cout << "test string" << std::endl;
    try{
        Array<std::string> tab(10);
        std::string add[10] = {"bulbizare", "herbizare", "florizare", "carapuce", "carabafe", "tortank", "salameche", "reptincel" ,"dracaufeu" ,"chenipan"};

        for (int i = 0; i < 10; i++)
        {
            std::cout << "add: [" << add[i] << "]" << std::endl; 
            tab[i] = add[i];
        }
         for (int i = 0; i < 10; i++)
        {
            const int value = rand();
            std::cout << "print: [" << tab[i] << "]" << std::endl; 
            tab[i] = value;
        }
    }
    catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << std::endl;
	}    return 0;
}