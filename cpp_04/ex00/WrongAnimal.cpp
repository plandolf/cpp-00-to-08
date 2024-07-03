/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:29:53 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/13 11:24:31 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "wrong animal is here" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "wrong animal fucking died" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	*this = src;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& rhs )
{
	std::cout << "WrongAnimal copy called." << std::endl;
	if ( this != &rhs ) {
		this->_type = rhs._type;
	}
	return *this;
}

void WrongAnimal::makeSound() const
{
	
}

std::string WrongAnimal::getType() const
{
	return _type;
}
