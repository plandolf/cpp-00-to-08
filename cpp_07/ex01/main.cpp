/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 12:54:00 by plandolf          #+#    #+#             */
/*   Updated: 2024/05/12 13:00:19 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main()
{
	int		intArray[5] = {1, 2, 3, 4, 5};
	float	floatArray[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	char	charArray[5] = {'a', 'b', 'c', 'd', 'e'};
	std::string stringArray[5] = {"hello", "world", "ciao", "mondo", "hola"};

	iter(intArray, 5, print);
	iter(floatArray, 5, print);
	iter(charArray, 5, print);
	iter(stringArray, 5, print);
	return 0;
}