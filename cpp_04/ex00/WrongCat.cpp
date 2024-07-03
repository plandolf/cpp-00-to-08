/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:32:42 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/13 11:24:56 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << _type << " has been created" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << _type << " has been killed you monster" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src)
{
	*this = src;
}

WrongCat& WrongCat::operator=( const WrongCat& rhs )
{
	std::cout << "WrongCat copy called." << std::endl;
	if ( this != &rhs ) {
		this->_type = rhs._type;
	}
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "PPPPPRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR" << std::endl;
}
