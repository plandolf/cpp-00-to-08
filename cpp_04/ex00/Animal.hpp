/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:37:57 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/13 11:44:00 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected :
		std::string _type;
	
	public:
		Animal();
		virtual ~Animal();
		Animal( const Animal& src );
		Animal& operator=( const Animal& rhs );
		std::string getType() const;
		virtual void makeSound() const;
};

#endif