/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 12:56:56 by plandolf          #+#    #+#             */
/*   Updated: 2024/05/12 12:56:58 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 12:51:50 by plandolf          #+#    #+#             */
/*   Updated: 2024/05/12 12:55:03 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T>
void	iter(T *array, int size, void (*f)(T const &))
{
	for (int i = 0; i < size; i++)
		f(array[i]);
}

template <typename T>
void	print(T const &x)
{
	std::cout << x << std::endl;
}

#endif