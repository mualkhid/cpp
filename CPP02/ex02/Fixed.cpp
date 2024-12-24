/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:41:18 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/24 12:21:29 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int Fixed::eight_bits = 8;

Fixed::Fixed( const int converter ) {
	fixed_point = converter << eight_bits;
}

Fixed::Fixed( void ) {
	fixed_point = 0;
}

Fixed::Fixed( Fixed const &ret_obj ) {
	*this = ret_obj;
}

Fixed::~Fixed(void) {

}

Fixed::Fixed( const float converter ) {
	fixed_point = (int)roundf(converter * (256));
}

Fixed Fixed::operator=(const Fixed &b) {
	if (this != &b)
		this->fixed_point = b.fixed_point;
	return (*this);
}

int Fixed::toInt( void ) const {
	return (fixed_point >> eight_bits);
}

std::ostream &operator<<(std::ostream& os, const Fixed& dt) {
	os << dt.toFloat();
	return (os);
}

float Fixed::toFloat( void ) const {
	return (fixed_point / (pow(2, 8)));
}

Fixed	&Fixed::min(Fixed &first, Fixed &sec) {
	if (first < sec)
		return (first);
	return (sec);
}

Fixed	&Fixed::max(Fixed &first, Fixed &sec) {
	if (first < sec)
		return (sec);
	return (first);
}


bool Fixed::operator<(const Fixed &compare) {
	return (this->fixed_point < compare.fixed_point);
}

bool Fixed::operator>(const Fixed &compare) {
	return (this->fixed_point > compare.fixed_point);
}

Fixed Fixed::operator*(const Fixed &b) {
	return (Fixed(this->toFloat() * b.toFloat()));
}

Fixed Fixed::operator+(const Fixed &b) {
	return (Fixed(this->toFloat() + b.toFloat()));
}

Fixed Fixed::operator/(const Fixed &b) {
	return (Fixed(this->toFloat() / b.toFloat()));
}

Fixed Fixed::operator-(const Fixed &b) {
	return (Fixed(this->toFloat() - b.toFloat()));
}

Fixed Fixed::operator++( int ) {
	Fixed	copy;
	copy.fixed_point = this->fixed_point;
	this->fixed_point++;
	return (copy);
}

Fixed &Fixed::operator++( void ) {
	this->fixed_point++;
	return (*this);
}

Fixed Fixed::operator--( int ) {
	Fixed	copy;
	copy.fixed_point = this->fixed_point;
	this->fixed_point--;
	return (copy);
}

Fixed &Fixed::operator--( void ) {
	this->fixed_point--;
	return (*this);
}

bool Fixed::operator>=(const Fixed &rightnode) {
	return (this->fixed_point >= rightnode.fixed_point);
}

bool Fixed::operator!=(const Fixed &rightnode) {
	return (this->fixed_point != rightnode.fixed_point);
}

bool Fixed::operator<=(const Fixed &rightnode) {
	return (this->fixed_point <= rightnode.fixed_point);
}

bool Fixed::operator==(const Fixed &rightnode) {
	return (this->fixed_point == rightnode.fixed_point);
}

const Fixed	&Fixed::min(const Fixed &first, const Fixed &sec) {
	if (first.fixed_point < sec.fixed_point)
		return (first);
	return (sec);
}

const Fixed	&Fixed::max(const Fixed &first, const Fixed &sec) {
	if (first.fixed_point < sec.fixed_point)
		return (sec);
	return (first);
}
