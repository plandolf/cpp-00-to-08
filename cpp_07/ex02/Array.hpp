/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 13:03:08 by plandolf          #+#    #+#             */
/*   Updated: 2024/05/12 13:21:49 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>
# include <stdexcept>

template <typename T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(Array const &other);
		~Array();
		Array &operator=(Array const &other);
		T &operator[](unsigned int i);
		unsigned int size() const;
	private:
		T		*_array;
		unsigned int	_size;
};

# include "Array.tpp"

#endif