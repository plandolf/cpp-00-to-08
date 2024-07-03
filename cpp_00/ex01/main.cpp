/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 13:32:24 by plandolf          #+#    #+#             */
/*   Updated: 2024/01/26 10:33:32 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
	PhoneBook phoneBook;

	phoneBook.welcome();
	std::string input;
	while (input != "EXIT")
	{
		std::cout << "> ";
		std::getline(std::cin, input);
		if (input == "ADD")
			phoneBook.addContact();
		else if (input == "SEARCH")
		{
			phoneBook.printContacts();
			if (phoneBook.getNbContacts() > 0)
				phoneBook.searchContact();
			else
				std::cout << "No contacts saved" << std::endl;
		}
		else if (input != "EXIT")
			std::cout << "Please choose ADD, SEARCH or EXIT" << std::endl;
	}
}