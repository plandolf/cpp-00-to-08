/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:35:13 by plandolf          #+#    #+#             */
/*   Updated: 2024/04/30 11:37:02 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): AForm(){}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	:AForm("RobotomyRequestForm",target , 72, 45){}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
{
	*this = other;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	if(this != &other){}
	return *this;
}

void RobotomyRequestForm::_execute() const
{
	std::cout << "Brrrrrrr" << std::endl;
	if (rand() % 2)
		std::cout << getTarget() << " has been robotomized" << std::endl;
	else
		std::cout << getTarget() << " has not been robotomized" << std::endl;
}