/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 11:37:57 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/13 11:29:02 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAnimal_HPP
# define AAnimal_HPP

# include <iostream>

class AAnimal
{
	protected :
		std::string _type;
		

	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal( const AAnimal& src );
		AAnimal& operator=( const AAnimal& rhs );
		std::string getType() const;
		virtual void makeSound() const = 0;
};

#endif