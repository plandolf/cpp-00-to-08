/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:06:04 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/01 10:45:28 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main(void)
{
	std::string name;

	std::cout << "Zombie on the stack" << std::endl;
	std::cout << "Name :" << std::flush;
	std::cin >> name;
	std::cout << std::endl;

	Zombie zombie_n1(name);
	zombie_n1.announce();

	std::cout << "\nZombie on the heap" << std::endl;
	std::cout << "Name :" << std::flush;
	std::cin >> name;
	std::cout << std::endl;

	Zombie *zombie_n2 = newZombie(name);
	zombie_n2->announce();
	delete zombie_n2;

	std::cout << "\nChumpster goooooooo" << std::endl;
	randomChump("Chumpster");
	return (0);
}