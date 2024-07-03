/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:06:54 by plandolf          #+#    #+#             */
/*   Updated: 2024/04/30 17:50:08 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

void	sectionTitle(const std::string& title) {
	std::cout	<< std::endl
				<< "*** " << title << " ***"
				<< std::endl << std::endl;
}

void	testMake(const std::string& formName, const std::string& target) 
{
	try
	{
		Bureaucrat	burro("burro", 150);
		Intern		interno;

		sectionTitle(formName);

		AForm* form = interno.makeForm(formName, target);

		std::cout << *form << std::endl;
		burro.signForm(*form);
		burro.executeForm(*form);

		delete form;
	}
	catch(std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
}

int	main() {
	try {
		testMake("robotomy request", "Bender");
		testMake("presidential pardon", "lrocca");
		testMake("shrubbery creation", "home");
		testMake("not a form", "you");
	}
	catch (std::exception& e) {
		std::cout << "Error: " << e.what() << std::endl;
	}
}