/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:51:56 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/13 11:46:13 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	this->_type = "cat";
	this->_brain = new Brain();
	std::cout << _type << " has been created" << std::endl;
}

Cat::~Cat()
{
	std::cout << _type << " has been killed you monster" << std::endl;
	delete _brain;
}

Cat::Cat( const Cat& src ) : AAnimal(src)
{
	_type = src._type;
    _brain = new Brain(*src._brain); 
}

Cat& Cat::operator=( const Cat& rhs )
{
	std::cout << "Cat copy called." << std::endl;
	if ( this != &rhs ) {
		this->_type = rhs._type;
		delete _brain;
		this->_brain = new Brain(*rhs._brain);
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "MIAOOOOOOOOOOOOOOOOOOOOOO" << std::endl;
}