/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:06:54 by plandolf          #+#    #+#             */
/*   Updated: 2024/04/27 16:54:26 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat b("Bob", 1);
	std::cout << b << std::endl;
	std::cout << "trying to increment grade of " << b.getName() << std::endl;
	try
	{
		b.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << b << std::endl;
	std::cout << "trying to increment grade of " << b.getName() << std::endl;
	try
	{
		b.incrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	Bureaucrat c("Alice", 150);
	c.incrementGrade();
	std::cout << c << std::endl;
	std::cout << "trying to decrement grade of " << c.getName() << std::endl;
	try
	{
		c.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << c << std::endl;
	std::cout << "trying to decrement grade of " << c.getName() << std::endl;
	try
	{
		c.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	Form f("Formaggio", 1, 1);
	std::cout << f << std::endl;
	std::cout << b << " trying to sign form " << f.getName() << std::endl;
	try
	{
		b.signForm(f);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << f << std::endl;
	try
	{
		b.signForm(f);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << c << " trying to sign form " << f.getName() << std::endl;
	try
	{
		c.signForm(f);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}