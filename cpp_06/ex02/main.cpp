/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:49:31 by plandolf          #+#    #+#             */
/*   Updated: 2024/05/10 14:28:10 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main() {
    srand(static_cast<unsigned int>(time(0)));
    Base* obj = generate();
	Base* obj2 = generate();
	Base* obj3 = NULL;
    identify(obj);
	identify(obj2);
	identify(obj3);
    identify(*obj);
	identify(*obj2);
	identify(*obj3);
    delete obj;
	delete obj2;
	delete obj3;
    return 0;
}