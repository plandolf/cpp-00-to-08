/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:42:57 by plandolf          #+#    #+#             */
/*   Updated: 2024/01/24 11:23:53 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook(void)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void		PhoneBook::welcome(void) const
{
	std::cout << "Welcome to your phonebook!" << std::endl;
	std::cout << "You can add up to 8 contacts." << std::endl;
	std::cout << "You can add a contact by typing \"ADD\"." << std::endl;
	std::cout << "You can search for a contact by typing \"SEARCH\"." << std::endl;
	std::cout << "You can exit the program by typing \"EXIT\"." << std::endl;
}

int		PhoneBook::_checkInput(void) const
{
	int	input = -1;
	bool valid = false;

	do
	{
		std::cout << "Please enter a valid index" << std::endl;
		std::cin >> input;
		if (std::cin.good() && (input >= 0 && input <= 8) && input < this->getNbContacts())
			valid = true;
		else
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
			std::cout << "\nInvalid input, try again" << std::endl;
			valid = false;

		}
	} while (!valid);

	return (input);
}

void    PhoneBook::addContact(void) 
{
    static int  i;
    this->_contacts[i % 8].init();
    this->_contacts[i % 8].setIndex(i % 8);
    i++;
}

void	PhoneBook::printContacts(void) const
{
	int i = 0;

	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	while (i < 8 && this->_contacts[i].getFirstName() != "")
	{
		this->_contacts[i].print(i);
		i++;
	}
}

void	PhoneBook::searchContact(void) const
{
	int i = this->_checkInput();
	if (i >= 0 && i < 8)
    	this->_contacts[i].view(i);
}

int		PhoneBook::getNbContacts(void) const
{
	int i = 0;

	while (i < 8 && this->_contacts[i].getFirstName() != "")
		i++;
	return (i);
}