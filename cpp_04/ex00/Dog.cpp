/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:44:21 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/13 11:44:32 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->_type = "dog";
	std::cout << _type << " has been created" << std::endl;
}

Dog::~Dog()
{
	std::cout << _type << " has been killed you monster" << std::endl;
}

Dog::Dog( const Dog& src )
{
	*this = src;
}

Dog& Dog::operator=( const Dog& rhs )
{
	std::cout << "Dog copy called." << std::endl;
	if ( this != &rhs ) {
		this->_type = rhs._type;
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "BAU BAU BAU BAU BAU" << std::endl;
}