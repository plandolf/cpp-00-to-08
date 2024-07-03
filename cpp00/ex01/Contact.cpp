/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:47:18 by plandolf          #+#    #+#             */
/*   Updated: 2024/01/24 12:55:21 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void		Contact::setIndex(int index)
{
	this->_index = index;
}

void		Contact::init(void)
{
	//std::cin.ignore();
	this->_firstName = this->_getInput("First name :");
	this->_lastName = this->_getInput("Last name :");
	this->_nickname = this->_getInput("Nickname :");
	this->_phoneNumber = this->_getInput("Phone number :");
	this->_darkestSecret = this->_getInput("Darkest secret :");
	std::cout << "\nContact added!\n" << std::endl;
	std::cout << "Please choose ADD, SEARCH or EXIT" << std::endl;
}

void		Contact::print(int index) const
{
	if (this->_firstName.empty() || this->_lastName.empty() || this->_nickname.empty())
        return ;
    std::cout << "|" << std::setw(10) << index << std::flush;
    std::cout << "|" << std::setw(10) << this->_maxLen(this->_firstName) << std::flush;
    std::cout << "|" << std::setw(10) << this->_maxLen(this->_lastName) << std::flush;
    std::cout << "|" << std::setw(10) << this->_maxLen(this->_nickname) << std::flush;
    std::cout << "|" << std::endl;
}

void		Contact::view(int index) const
{
	 if (this->_firstName.empty() || this->_lastName.empty() || this->_nickname.empty())
        return ;
    std::cout << std::endl;
    std::cout << "---->> CONTACT #" << index << " <<----" << std::endl;
    std::cout << "First Name:\t" << this->_firstName << std::endl;
    std::cout << "Last Name:\t" << this->_lastName << std::endl;
    std::cout << "Nickname:\t" << this->_nickname << std::endl;
	std::cout << "Phone Number:\t" << this->_phoneNumber << std::endl;
	std::cout << "Darkest Secret:\t" << this->_darkestSecret << std::endl;
    std::cout << std::endl;
}

std::string	Contact::_maxLen(std::string str) const
{
	if (str.length() > 10)
	{
		str.resize(9);
		str.append(".");
	}
	return (str);
}

std::string	Contact::_getInput(std::string str) const
{
    std::string input = "";
    bool        valid = false;
    do
    {
        std::cout << str << std::flush;
        std::getline(std::cin, input);
        if (std::cin.good() && !input.empty())
            valid = true;
        else {
            std::cin.clear();
            std::cout << "Invalid input; please try again." << std::endl;
        }
    } while (!valid);
    return (input);
}

std::string	Contact::getFirstName(void) const
{
	return (this->_firstName);
}