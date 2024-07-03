/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:42:49 by plandolf          #+#    #+#             */
/*   Updated: 2024/05/10 14:37:17 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {
}

Base* generate(void) {
    switch (rand() % 3) {
        case 0: return new A();
        case 1: return new B();
        case 2: return new C();
    }
    return NULL;  // Just for safety
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p) != NULL) {
		std::cout << "A class identified" << std::endl;
	} else if (dynamic_cast<B*>(p) != NULL) {
		std::cout << "B class identified" << std::endl;
	} else if (dynamic_cast<C*>(p) != NULL) {
		std::cout << "C class identified" << std::endl;
	} else {
		std::cout << "Can't identify the class" << std::endl;
	}
}


void identify(Base &p)
{
	try {
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A class identified" << std::endl;
	}
	catch (const std::exception& e) {
		try {
			B &b = dynamic_cast<B &>(p);
			(void)b;
			std::cout << "B class identified" << std::endl;
		}
		catch (const std::exception& e) {
			try {
				C &c = dynamic_cast<C &>(p);
				(void)c;
				std::cout << "C class identified" << std::endl;
			}
			catch (const std::exception& e) {
				std::cout << "Invalid type" << std::endl;
			}
		}
	}
}