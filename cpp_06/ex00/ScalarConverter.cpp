/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 14:25:31 by plandolf          #+#    #+#             */
/*   Updated: 2024/05/06 11:53:05 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

    static void printCharResults(char value) {
        std::cout << "char: '" << value << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(value) << std::endl;
        std::cout << std::fixed << std::setprecision(1);
        std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(value) << std::endl;
        std::cout << std::setprecision(6);  // Reset to default precision
    }

    static void printNumericResults(long double value) {
        // Check if value can be a char
        if (value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max()) {
            std::cout << "char: impossible" << std::endl;
        } else {
            char c = static_cast<char>(static_cast<int>(value));
            if (std::isprint(c)) {
                std::cout << "char: '" << c << "'" << std::endl;
            } else {
                std::cout << "char: Non displayable" << std::endl;
            }
        }

        // Integer conversion checking
        if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max()) {
            std::cout << "int: impossible" << std::endl;
        } else {
            std::cout << "int: " << static_cast<int>(value) << std::endl;
        }

        std::cout << std::fixed << std::setprecision(1);
        std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(value) << std::endl;
        std::cout << std::setprecision(6);  // Reset to default precision
    }

    static void printSpecialCases(const std::string& input) {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << input << "f" << std::endl;
        std::cout << "double: " << input << std::endl;
    }

void ScalarConverter::convert(const std::string& input)
{
	 if (input.length() == 1 && std::isprint(input[0])) {
            char charValue = input[0];
            printCharResults(charValue);
        } else {
            std::istringstream iss(input);
            long double value;

            if (iss >> value) {
                // Correctly parse and print results for numeric values
                printNumericResults(value);
            } else {
                // Handle special cases like "inf", "nan", etc.
                printSpecialCases(input);
            }
        }
}