/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:53:44 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/12 12:58:31 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
	
	private :
		std::string _ideas[100];
	
	public:
		Brain( void );
		~Brain( void );
		Brain( const Brain& src );
		Brain& operator=( const Brain& rhs );
};

#endif