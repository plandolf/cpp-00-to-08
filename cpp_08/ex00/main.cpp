/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:41:02 by plandolf          #+#    #+#             */
/*   Updated: 2024/05/15 11:47:37 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	try
	{
		std::vector<int> vec;
		vec.push_back(1);
		vec.push_back(10);
		vec.push_back(100);
		
		std::cout << *easyfind(vec, 10) << std::endl;
		std::cout << *easyfind(vec, 40) << std::endl;
	}
	catch (const NotFoundException &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}