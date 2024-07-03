/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:06:14 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/01 11:10:06 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " is dead" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout <<  this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::nameZombie(std::string name)
{
	this->_name = name;
}