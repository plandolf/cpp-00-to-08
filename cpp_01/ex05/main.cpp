/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 12:48:01 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/02 13:01:52 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (void)
{
	std::string	input;
	Harl		harl;
	do
	{
		std::cout << "Enter a level of complain (DEBUG, INFO, WARNING, ERROR) or EXIT to stop the program): " << std::flush;
		std::cin >> input;
		harl.complains(input);
	} while (input != "EXIT");
	return (0);
}