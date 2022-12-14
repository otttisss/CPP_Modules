/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmilagro <cmilagro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:03:00 by cmilagro          #+#    #+#             */
/*   Updated: 2022/11/07 00:04:39 by cmilagro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include "MutantStack.tpp"
#include <list>
#include <iostream>

int main()
{
	std::cout << "MUTANT STACK ITERATOR" << std::endl;
	{
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
       while (it != ite)
        {
        std::cout << "[" << *it << "]";
        ++it;
        }
        std::cout << std::endl;
        std::stack<int> s(mstack);
    }

    std::cout << std::endl;
    std::cout << "LIST ITERATOR" << std::endl;
	{
        std::list<int> lst;
        lst.push_back(5);
        lst.push_back(17);
        std::cout << lst.back() << std::endl;
        lst.pop_back();
        std::cout << lst.size() << std::endl;
        lst.push_back(3);
        lst.push_back(5);
        lst.push_back(737);
        //[...]
        lst.push_back(0);
        std::list<int>::iterator it = lst.begin();
        std::list<int>::iterator ite = lst.end();
        ++it;
        --it;
       	while (it != ite)
        {
        std::cout << "[" << *it << "]";
        ++it;
        }
        std::cout << std::endl;
        std::list<int> s(lst);
    }

    {
        std::cout << std::endl;
        std::cout << "MUTANT STACK REVERSE ITERATOR" << std::endl;
        MutantStack<int> mstack;
        mstack.push(3);
        mstack.push(14);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(13);
        mstack.push(11);
        mstack.push(90);
        //[...]
        mstack.push(0);
        MutantStack<int>::reverse_iterator it = mstack.rbegin();
        MutantStack<int>::reverse_iterator ite = mstack.rend();
        ++it;
        --it;
       while (it != ite)
        {
        std::cout << "[" << *it << "]";
        ++it;
        }
        std::cout << std::endl;
        std::stack<int> s(mstack);
    }

	{
        std::cout << std::endl;
        std::cout << "LIST REVERSE ITERATOR" << std::endl;
        std::list<int> lst;
        lst.push_back(3);
        lst.push_back(14);
        std::cout << lst.back() << std::endl;
        lst.pop_back();
        std::cout << lst.size() << std::endl;
        lst.push_back(13);
        lst.push_back(11);
        lst.push_back(90);
        //[...]
        lst.push_back(0);
        std::list<int>::reverse_iterator it = lst.rbegin();
        std::list<int>::reverse_iterator ite = lst.rend();
        ++it;
        --it;
        while (it != ite)
        {
        std::cout << "[" << *it << "]";
        ++it;
        }
        std::cout << std::endl;
        std::list<int> s(lst);
    }

    {
        std::cout << std::endl;
        std::cout << "MUTANT STACK CPY" << std::endl;
        MutantStack<int> mstack;
        MutantStack<int> mstack2;
        mstack.push(5);
        mstack.push(17);
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        mstack.push(0);
        mstack2 = mstack;
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        std::cout << "original :" << std::endl;
        while (it != ite)
        {
        std::cout << "[" << *it << "]";
        ++it;
        }
        std::cout << std::endl;
         it = mstack2.begin();
         ite = mstack2.end();
        ++it;
        --it;
        std::cout << "cpy :" << std::endl;
        while (it != ite)
        {
        std::cout << "[" << *it << "]";
        ++it;
        }
        std::cout << std::endl;
    }
	return 0; 
}