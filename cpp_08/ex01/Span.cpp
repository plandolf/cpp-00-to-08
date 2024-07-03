/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:41:40 by plandolf          #+#    #+#             */
/*   Updated: 2024/05/15 12:58:08 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _max_size(n) {}

Span::Span(const Span &other) {
	_max_size = other._max_size;
	_numbers = other._numbers;
}

Span &Span::operator=(const Span &other) {
	if(this != &other) {
		_max_size = other._max_size;
		_numbers = other._numbers;
	}
	return *this;
}

Span::~Span() {}

void Span::addNumber(int n) {
	if (_numbers.size() >= _max_size)
		throw std::exception();
	_numbers.push_back(n);
}

int Span::shortestSpan() const {
	if (_numbers.size() < 2)
		throw std::exception();
	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());
	int min = sorted[1] - sorted[0];
	for (size_t i = 1; i < sorted.size() - 1; i++) {
		int span = sorted[i + 1] - sorted[i];
		if (span < min)
			min = span;
	}
	return min;
}

int Span::longestSpan() const {
	if (_numbers.size() < 2)
		throw std::exception();
	std::vector<int> sorted = _numbers;
	std::sort(sorted.begin(), sorted.end());
	return sorted.back() - sorted.front();
}