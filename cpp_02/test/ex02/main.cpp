/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:16:42 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/07 12:29:06 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
Fixed c(Fixed(1) + Fixed(2));
Fixed d(Fixed(1) - Fixed(2));
Fixed e(Fixed(10) / Fixed(2));
Fixed f(Fixed(10) * Fixed(2));

std::cout << "a is : " << a << std::endl;
std::cout << "preincrementing a " << ++a << std::endl;
std::cout << "a is now: " << a << std::endl;
std::cout << "postincrementing a " << a++ << std::endl;
std::cout << "a is now: " << a << std::endl;
std::cout << "b is now: " << b << std::endl;
std::cout << "c is now: " << c << std::endl;
std::cout << "d is now: " << d << std::endl;
std::cout << "e is now: " << e << std::endl;
std::cout << "f is now: " << f << std::endl;
std::cout << "e + f is: " << e + f << std::endl;
std::cout << "max between a and b is " << Fixed::max( a, b ) << std::endl;
return 0;
}