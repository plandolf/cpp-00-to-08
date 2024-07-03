/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:07:34 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/01 12:48:55 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string	_name;
	
	public:
		Zombie(void);
		~Zombie(void);
		Zombie(std::string name);
		void	announce(void);
		Zombie* newZombie(std::string name);
		void	randomChump(std::string name);
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif