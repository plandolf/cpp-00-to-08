/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:29:53 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/12 12:35:44 by plandolf         ###   ########.fr       */
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

void WrongAnimal::makeSound() const
{
	
}

std::string WrongAnimal::getType() const
{
	return _type;
}
