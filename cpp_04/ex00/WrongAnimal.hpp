/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 12:27:07 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/13 11:22:54 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{
	
	protected :
		std::string _type;

	public :
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal( const WrongAnimal& src );
		WrongAnimal& operator=( const WrongAnimal& rhs );
		std::string getType() const;
		virtual void makeSound() const;
};

#endif