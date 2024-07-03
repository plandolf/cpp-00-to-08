/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:53:36 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/13 11:14:43 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain created." << std::endl;
}

Brain::~Brain( void )
{
	std::cout << "Brain destroyed." << std::endl;
}

Brain::Brain( const Brain& src )
{
	*this = src;
}

Brain& Brain::operator=( const Brain& src )
{
	std::cout << "Brain copy called." << std::endl;
	if ( this != &src ) {
		for ( int i = 0; i < 100; i++ ) {
			this->_ideas[i] = src._ideas[i];
		}
	}
	return *this;
}