/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:14:53 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/07 12:37:30 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	
	private :
		int					_value;
		static const int	_fractionalBits = 8;
	
	public :
		//copy constructor
		Fixed(const Fixed &fixed);
		//int constructor
		Fixed(int const value);
		//float constructor
		Fixed(float const value);
		
		Fixed();
		~Fixed();
		Fixed &operator=(const Fixed &fixed);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream & operator<<( std::ostream & o, Fixed const & i );

#endif