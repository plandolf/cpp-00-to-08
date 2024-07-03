/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:39:13 by plandolf          #+#    #+#             */
/*   Updated: 2024/04/30 12:35:16 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): AForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	:AForm("ShrubberyCreationForm",target , 145, 137){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
{
	*this = other;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if(this != &other){}
	return *this;
}

void ShrubberyCreationForm::_execute() const
{
	std::fstream fs;
	
	fs.open((_target + "_shrubbery").c_str(), std::fstream::out | std::fstream::trunc);
	if (!fs.good())
	{
		std::cerr << "Error opening file" << std::endl;
		return;
	}
	fs << "       _-_\n";
	fs << "    /~~   ~~\\\n";
	fs << " /~~         ~~\\\n";
	fs << "{               }\n";
	fs << " \\  _-     -_  /\n";
	fs << "   ~  \\\\ //  ~\n";
	fs << "_- -   | | _- _\n";
	fs << "  _ -  | |   -_\n";
	fs << "      // \\\n";
	fs << "     //   \\\n";
	fs << "    //     \\\n";
	fs << "   //       \\\n";
	fs << "  //         \\\n";
	fs << "             \\\n";
	fs << "             ^\n";
	fs.close();
}
