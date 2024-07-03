/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 14:25:42 by plandolf          #+#    #+#             */
/*   Updated: 2024/05/06 11:37:04 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <iomanip>
#include <cctype>

class ScalarConverter
{
	private:
		ScalarConverter();
	public :
		static void convert(const std::string &input);
};

#endif