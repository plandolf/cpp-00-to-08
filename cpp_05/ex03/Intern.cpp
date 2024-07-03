/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:59:00 by plandolf          #+#    #+#             */
/*   Updated: 2024/04/30 17:34:12 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

const std::string	Intern::_formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
const CF			Intern::_forms[3] = {&Intern::_ShrubberyCreationForm, &Intern::_RobotomyRequestForm, &Intern::_PresidentalPardonForm};

Intern::Intern(){}

Intern::Intern(const Intern& other)
{
	*this = other;
}

Intern::~Intern(){}

Intern& Intern::operator=(const Intern& other)
{
	if(this != &other){}
	return *this;
}

AForm* Intern::makeForm(const std::string& formName, const std::string& target)
{
	for (int i = 0; i < 3; i++)
	{
		if (formName == _formNames[i])
			return (this->*_forms[i])(target);
	}
	throw FormNotFoundException();
}

AForm* Intern::_PresidentalPardonForm(const std::string& target) const
{
	return new PresidentialPardonForm(target);
}

AForm* Intern::_RobotomyRequestForm(const std::string& target) const
{
	return new RobotomyRequestForm(target);
}

AForm* Intern::_ShrubberyCreationForm(const std::string& target) const
{
	return new ShrubberyCreationForm(target);
}

const char* Intern::FormNotFoundException::what() const throw()
{
	return "Form not found";
}

