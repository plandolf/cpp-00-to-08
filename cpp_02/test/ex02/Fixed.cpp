/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plandolf <plandolf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 10:12:48 by plandolf          #+#    #+#             */
/*   Updated: 2024/02/07 11:23:11 by plandolf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0){
}

Fixed::Fixed(const Fixed &fixed) : _value(fixed.getRawBits()){
}

Fixed::Fixed(const int n) : _value(n << _fractionalBits){
}

Fixed::Fixed(const float n) : _value(roundf(n * (1 << _fractionalBits))){
}

Fixed::~Fixed() {
}

Fixed &Fixed::operator=(const Fixed &fixed) {
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

std::ostream& operator<<( std::ostream & o, Fixed const & i ) {
	o << i.toFloat();
	return o;
}

bool	Fixed::operator>(const Fixed &fixed) const {
	return this->getRawBits() > fixed.getRawBits();
}

bool	Fixed::operator<(const Fixed &fixed) const {
	return this->getRawBits() < fixed.getRawBits();
}

bool	Fixed::operator>=(const Fixed &fixed) const {
	return this->getRawBits() >= fixed.getRawBits();
}

bool	Fixed::operator<=(const Fixed &fixed) const {
	return this->getRawBits() <= fixed.getRawBits();
}

bool	Fixed::operator==(const Fixed &fixed) const {
	return this->getRawBits() == fixed.getRawBits();
}

bool	Fixed::operator!=(const Fixed &fixed) const {
	return this->getRawBits() != fixed.getRawBits();
}

Fixed	Fixed::operator+(const Fixed &fixed) const {
	return Fixed(this->toFloat() + fixed.toFloat());
}

Fixed	Fixed::operator-(const Fixed &fixed) const {
	return Fixed(this->toFloat() - fixed.toFloat());
}

Fixed	Fixed::operator*(const Fixed &fixed) const {
	return Fixed(this->toFloat() * fixed.toFloat());
}

Fixed	Fixed::operator/(const Fixed &fixed) const {
	return Fixed(this->toFloat() / fixed.toFloat());
}

Fixed&	Fixed::min(Fixed &a, Fixed &b) {
	return a < b ? a : b;
}

Fixed&	Fixed::max(Fixed &a, Fixed &b) {
	return a > b ? a : b;
}

const Fixed&	Fixed::min(const Fixed &a, const Fixed &b) {
	return a < b ? a : b;
}

const Fixed&	Fixed::max(const Fixed &a, const Fixed &b) {
	return a > b ? a : b;
}

Fixed&	Fixed::operator++(void) {
	this->_value++;
	return *this;
}

Fixed	Fixed::operator++(int) {
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed&	Fixed::operator--(void) {
	this->_value--;
	return *this;
}

Fixed	Fixed::operator--(int) {
	Fixed tmp(*this);
	operator--();
	return tmp;
}

