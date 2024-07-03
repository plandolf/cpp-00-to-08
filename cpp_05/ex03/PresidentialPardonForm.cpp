/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:56:08 by plandolf          #+#    #+#             */
/*   Updated: 2024/04/30 12:53:47 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm(){}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	:AForm("PresidentialPardonForm",target , 25, 5){}

 PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
 {
	*this = other;
 }

 PresidentialPardonForm::~PresidentialPardonForm(){}

 PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
 {
	if(this != &other){}
	return *this;
 }

 void PresidentialPardonForm::_execute() const
 {
	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
 }