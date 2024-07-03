/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:46:09 by plandolf          #+#    #+#             */
/*   Updated: 2024/05/18 16:38:03 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
    try {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
		//sp.addNumber(11); // Should throw an exception
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

        // Test adding a range of numbers
        Span sp2 = Span(10000);
        std::vector<int> vec(10000);
        for (int i = 0; i < 10000; ++i) {
            vec[i] = i;
        }
        sp2.addNumbers(vec.begin(), vec.end());
        std::cout << "Shortest Span: " << sp2.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << sp2.longestSpan() << std::endl;

    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}