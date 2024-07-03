/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:41:43 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/13 11:29:14 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(){
	std::cout << "AAnimal created" << std::endl;
}

AAnimal::~AAnimal(){
	std::cout << "AAnimal killed :(" << std::endl;
}

AAnimal::AAnimal( const AAnimal& src ){
	*this = src;
}

AAnimal& AAnimal::operator=( const AAnimal& rhs ){
	if ( this != &rhs ) {
		this->_type = rhs._type;
	}
	return *this;
}

std::string AAnimal::getType() const
{
	return _type;
}