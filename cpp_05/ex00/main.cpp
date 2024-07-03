/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 11:06:54 by plandolf          #+#    #+#             */
/*   Updated: 2024/04/30 17:58:14 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{	try
	{
		Bureaucrat b("Bob", 3);
		std::cout << b << std::endl;
		std::cout << "trying to increment grade of " << b.getName() << std::endl;
		b.incrementGrade();
		std::cout << b << std::endl;
		std::cout << "trying to increment grade of " << b.getName() << std::endl;
		b.incrementGrade();
		Bureaucrat c("Alice", 150);
		c.incrementGrade();
		std::cout << c << std::endl;
		std::cout << "trying to decrement grade of " << c.getName() << std::endl;
		c.decrementGrade();
		std::cout << c << std::endl;
		std::cout << "trying to decrement grade of " << c.getName() << std::endl;
		c.decrementGrade();
	}
	catch (std::exception& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	return 0;
}