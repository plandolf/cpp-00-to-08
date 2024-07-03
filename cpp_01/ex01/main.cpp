/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:06:04 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/01 11:17:25 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main(void)
{
	int n;
	std::string name;

	std::cout << "how many zombies in the horde:" << std::flush;
	std::cin >> n;
	std::cout << "how the zombies should be named:" << std::flush;
	std::cin >> name;
	std::cout << "allocating " << n << " zombies" << std::endl;
	Zombie* horde = zombieHorde(n, name);
	std::cout << "killing the horde" << std::endl;
	killHorde(horde);
}