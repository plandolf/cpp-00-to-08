/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:14:53 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/07 11:51:14 by plandolf         ###   ########.fr       */
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
		
		bool	operator>(const Fixed &fixed) const;
		bool	operator<(const Fixed &fixed) const;
		bool	operator>=(const Fixed &fixed) const;
		bool	operator<=(const Fixed &fixed) const;
		bool	operator==(const Fixed &fixed) const;
		bool	operator!=(const Fixed &fixed) const;
		
		Fixed	operator+(const Fixed &fixed) const;
		Fixed	operator-(const Fixed &fixed) const;
		Fixed	operator*(const Fixed &fixed) const;
		Fixed	operator/(const Fixed &fixed) const;

		Fixed&	operator++(void); //before
		Fixed	operator++(int); //after
		Fixed&	operator--(void); //before
		Fixed	operator--(int); //after
		
		static Fixed&	min(Fixed &a, Fixed &b); 
		static Fixed&	max(Fixed &a, Fixed &b);
		static const Fixed&	min(const Fixed &a, const Fixed &b);
		static const Fixed&	max(const Fixed &a, const Fixed &b);
		
		Fixed();
		~Fixed();
		Fixed& operator=(const Fixed &fixed);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream& operator<<( std::ostream & o, Fixed const & i );

#endif