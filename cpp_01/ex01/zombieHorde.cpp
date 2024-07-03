/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 10:49:39 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/01 11:09:14 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int  N, std::string name)
{
	Zombie *zombie = new Zombie[N];
	for(int i = 0; i < N; i++)
		zombie[i].nameZombie(name);
	return (zombie);
}

void	killHorde(Zombie* horde)
{
	delete [] horde;
}