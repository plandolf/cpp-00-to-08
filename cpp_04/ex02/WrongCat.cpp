/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:32:42 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/12 12:38:57 by plandolf         ###   ########.fr       */
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

void WrongCat::makeSound() const
{
	std::cout << "PPPPPRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR" << std::endl;
}
