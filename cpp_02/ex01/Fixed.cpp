/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:12:48 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/06 11:18:25 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) : _value(fixed.getRawBits()){
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int n) : _value(n << _fractionalBits){
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float n) : _value(roundf(n * (1 << _fractionalBits))){
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
	std::cout << "Assignation operator called" << std::endl;
	this->_value = fixed.getRawBits();
	return *this;
}

int		Fixed::getRawBits(void) const {
	return this->_value;
}

void	Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

int		Fixed::toInt(void) const {
	return this->_value >> _fractionalBits;
}

float   Fixed::toFloat(void) const {
    return static_cast<float>( this->getRawBits() ) / ( 1 << _fractionalBits );
}

std::ostream & operator<<( std::ostream & o, Fixed const & i ) {
	o << i.toFloat();
	return o;
}