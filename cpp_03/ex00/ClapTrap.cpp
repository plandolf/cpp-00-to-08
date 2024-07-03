/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:01:04 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/08 15:38:48 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : _name(name)
{
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap " << _name << " has been created\n" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " has been destroyed" << std::endl;
}

void	ClapTrap::printStatus() const
{
	std::cout <<  _name << " STATS" << std::endl;
	std::cout << "Hit points: " << _hitPoints << std::endl;
	std::cout << "Energy points: " << _energyPoints << std::endl;
	std::cout << "Attack damage: " << _attackDamage << std::endl;
	std::cout << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy points left!\n" << std::endl;
		return ;
	}
	else if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is DEAD and cannot attack\n" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " has " << _energyPoints << " energy points left!\n" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is already DEAD\n" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
	std::cout << "ClapTrap " << _name << " has " << _hitPoints << " hit points left!\n" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy points left!\n" << std::endl;
		return ;
	}else if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is DEAD and cannot repair\n" << std::endl;
		return ;
	} 
	std::cout << "ClapTrap " << _name << " has been repaired by " << amount << " points!" << std::endl;
	_hitPoints += amount;
	std::cout << "ClapTrap " << _name << " has now " << _hitPoints << " hit points left!" << std::endl;
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " has " << _energyPoints << " energy points left!\n" << std::endl;
}