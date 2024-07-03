/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed2.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 10:20:15 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/05 11:34:54 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed2.hpp"
#include <fstream>

Sed2::Sed2(std::string filename)
{
	this->_inFile = filename;
	this->_outFile = filename + ".replace";
}

Sed2::~Sed2()
{
}

void	Sed2::ft_replace(std::string s1, std::string s2)
{
	std::ifstream		in(this->_inFile.c_str());
	std::string			line;
	size_t				pos;

	if (!in.is_open())
	{
		std::cerr << "Error: could not open file" << std::endl;
		return ;
	}
	if (std::getline(in, line, '\0'))
	{
		std::ofstream		out(this->_outFile.c_str());
		while ((pos = line.find(s1)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos = line.find(s1);
		}
		out << line;
		out.close();
	}
	else
		std::cerr << "Error: empty file" << std::endl;
	in.close();
}