/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:04:45 by plandolf          #+#    #+#             */
/*   Updated: 2024/05/15 11:43:17 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <vector>
# include <exception>
# include <iostream>

class NotFoundException : public std::exception {
	public:
		virtual const char* what() const throw() {
			return "Element not found";
		}
};

template <typename T>
typename T::iterator easyfind(T &container, int value) {
	typename T::iterator it = container.begin();
	for (; it != container.end(); it++) {
		if (*it == value)
			return it;
	}
	throw NotFoundException();
}



#endif