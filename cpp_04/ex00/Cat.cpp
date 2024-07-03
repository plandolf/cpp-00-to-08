/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:51:56 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/13 11:43:40 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->_type = "cat";
	std::cout << _type << " has been created" << std::endl;
}

Cat::~Cat()
{
	std::cout << _type << " has been killed you monster" << std::endl;
}

Cat::Cat( const Cat& src )
{
	*this = src;
}

Cat& Cat::operator=( const Cat& rhs )
{
	std::cout << "Cat copy called." << std::endl;
	if ( this != &rhs ) {
		this->_type = rhs._type;
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "MIAOOOOOOOOOOOOOOOOOOOOOO" << std::endl;
}