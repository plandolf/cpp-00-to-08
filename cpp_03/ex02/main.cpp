/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:09:29 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/08 15:15:57 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int		main()
{
	FragTrap	frag("Fraggy");
	ScavTrap	scav("Scavvy");
	ClapTrap	clap("Clappy");

	frag.printStatus();
	scav.printStatus();
	clap.printStatus();
	
	frag.attack("target");
	scav.attack("target");
	clap.attack("target");
	
	frag.highFivesGuys();
	scav.guardGate();
}