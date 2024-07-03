/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 13:14:50 by plandolf          #+#    #+#             */
/*   Updated: 2024/05/12 14:09:41 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include <ctime>
#include <cmath>

int main(int, char**)
{
	//make empty array
	Array<int> vuoto;
	
	//make array of 10 ints
	Array<int> intArray(10);
	for (unsigned int i = 0; i < intArray.size(); i++)
		intArray[i] = i;
	
	//make array of 10 floats
	Array<float> floatArray(10);
	for (unsigned int i = 0; i < floatArray.size(); i++)
		floatArray[i] = static_cast<float>(i) + 0.1;
	
	//make array of 10 doubles
	Array<double> doubleArray(10);
	for (unsigned int i = 0; i < doubleArray.size(); i++)
		doubleArray[i] = static_cast<double>(i) + 0.2;

	//make array of 3 strings
	Array<std::string> stringArray(3);
	stringArray[0] = "hello";
	stringArray[1] = "world";
	stringArray[2] = "ciao";

	//print array of int
	std::cout << "////////////////intArray////////////////" << std::endl;
	for (unsigned int i = 0; i < intArray.size(); i++)
		std::cout << intArray[i] << std::endl;
	
	//print array of float
	std::cout << "////////////////floatArray////////////////" << std::endl;
	for (unsigned int i = 0; i < floatArray.size(); i++)
		std::cout << floatArray[i] << std::endl;

	//print array of double
	std::cout << "////////////////doubleArray////////////////" << std::endl;
	for (unsigned int i = 0; i < doubleArray.size(); i++)
		std::cout << doubleArray[i] << std::endl;
	
	//print array of string
	std::cout << "////////////////stringArray////////////////" << std::endl;
	for (unsigned int i = 0; i < stringArray.size(); i++)
		std::cout << stringArray[i] << std::endl;

	//test out of range
	try
	{
		intArray[10] = 42;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	//test copy constructor
	std::cout << "////////////////TEST COPY////////////////" << std::endl;
	Array<int> intArrayCopy(intArray);
	for (unsigned int i = 0; i < intArrayCopy.size(); i++)
		std::cout << intArrayCopy[i] << std::endl;
	
	//test operator=
	std::cout << "////////////////TEST ASSIGNMENT////////////////" << std::endl;
	Array<float> floatArrayAssign2 = floatArray;
	for (unsigned int i = 0; i < floatArrayAssign2.size(); i++)
		std::cout << floatArrayAssign2[i] << std::endl;

	//test size
	std::cout << "////////////////TEST SIZE FUNCTION////////////////" << std::endl;
	std::cout << "intArray size: " << intArray.size() << std::endl;
	std::cout << "floatArray size: " << floatArray.size() << std::endl;
	std::cout << "doubleArray size: " << doubleArray.size() << std::endl;
	std::cout << "stringArray size: " << stringArray.size() << std::endl;
	std::cout << "vuoto size: " << vuoto.size() << std::endl;
	
	return 0;
}