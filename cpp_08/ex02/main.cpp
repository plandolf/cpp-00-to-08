/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 12:49:57 by plandolf          #+#    #+#             */
/*   Updated: 2024/05/18 16:18:03 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main() {
    std::cout << "TEST MUTANTSTACK" << std::endl;
	// Test MutantStack
    MutantStack<int> mstack;
	
	//pushing 2 elements
    mstack.push(5);
    mstack.push(17);
	//showing top element
	std::cout << "top element :" << std::endl;
    std::cout << mstack.top() << std::endl;
	//poping top element
    mstack.pop();
	//showing size
	std::cout << "stack size :" << std::endl;
    std::cout << mstack.size() << std::endl;
	//populating stack
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

	//iterating through stack
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
	std::cout << "begin and end :" << std::endl;
    std::cout << *it << std::endl;
	std::cout << mstack.back() << std::endl;
	std::cout << "finding elements :" << std::endl;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
	//copying stack
    MutantStack<int> s(mstack);
	

	std::cout << "TEST LIST" << std::endl;
    // Test with std::list
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);
	std::cout << "top element of list:" << std::endl;
    std::cout << lst.back() << std::endl;
    lst.pop_back();
	std::cout << "size of list:" << std::endl;
    std::cout << lst.size() << std::endl;
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);

	std::cout << "begin and end :" << std::endl;
    std::list<int>::iterator itl = lst.begin();
    std::list<int>::iterator itle = lst.end();
	
	std::cout << *itl << std::endl;
	std::cout << lst.back() << std::endl;
	std::cout << "finding elements :" << std::endl;
    while (itl != itle) {
        std::cout << *itl << std::endl;
        ++itl;
    }

    return 0;
}