/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:06:14 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/01 11:02:09 by plandolf         ###   ########.fr       */
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

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout <<  this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}