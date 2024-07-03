/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 12:08:37 by plandolf          #+#    #+#             */
/*   Updated: 2024/05/10 14:28:59 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <limits>
#include <cmath>
#include <iomanip>
#include <stdint.h>

struct Data{
	int		value;
};

class Serializer
{
	private:
		Serializer();
	public:
		static uintptr_t serialize(Data *ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif