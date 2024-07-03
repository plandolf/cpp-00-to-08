/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 11:50:12 by plandolf          #+#    #+#             */
/*   Updated: 2024/05/15 12:54:18 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <exception>
# include <iostream>
# include <algorithm>

class Span
{
	private:
		unsigned int		_max_size;
		std::vector<int>	_numbers;
	
	public:
		Span(unsigned int n);
		Span(const Span &other);
		Span &operator=(const Span &other);
		~Span();
		
		void addNumber(int n);
		
		template <typename T>
		void addNumbers(T begin, T end);
		
		int shortestSpan() const;
		int longestSpan() const;
};

template <typename T>
void Span::addNumbers(T begin, T end) {
	if (_numbers.size() + std::distance(begin, end) > _max_size)
		throw std::exception();
	_numbers.insert(_numbers.end(), begin, end);
}

#endif