/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:09:29 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/08 15:44:58 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int		main()
{
	ClapTrap	clap("ClapTrap1");
	
	clap.printStatus();
	clap.attack("target");
	clap.takeDamage(50);
	clap.takeDamage(5);
	clap.beRepaired(5);
	clap.attack("target");
	clap.printStatus();
	return (0);
}