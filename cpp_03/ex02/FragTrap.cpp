/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:28:18 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/08 15:07:27 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << this->_name << " has been created" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " has been destroyed" << std::endl;
}

void	FragTrap::attack(const std::string& target){
	if (this->_energyPoints == 0)
	{
		std::cout << "FragTrap " << this->_name << " has no energy points left!" << std::endl;
		return ;
	}
	else if (this->_hitPoints == 0)
	{
		std::cout << "FragTrap " << this->_name << " is DEAD and cannot attack" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
	std::cout << "FragTrap " << this->_name << " has " << this->_energyPoints << " energy points left!\n" << std::endl;

}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << this->_name << " wants to high five you!" << std::endl;
}