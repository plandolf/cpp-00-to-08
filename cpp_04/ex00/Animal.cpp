/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:41:43 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/13 11:43:52 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal created" << std::endl;
}

Animal::~Animal(){
	std::cout << "Animal killed :(" << std::endl;
}

Animal::Animal( const Animal& src ){
	*this = src;
}

Animal& Animal::operator=( const Animal& rhs ){
	if ( this != &rhs ) {
		this->_type = rhs._type;
	}
	return *this;
}

void Animal::makeSound() const
{
}

std::string Animal::getType() const
{
	return _type;
}