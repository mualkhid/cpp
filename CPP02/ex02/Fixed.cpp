/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:41:18 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/20 20:41:19 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int Fixed::eight_bits = 8;

Fixed::Fixed( const int converter ) {
	stock = converter << eight_bits;
}

Fixed::Fixed( void ) {
	stock = 0;
}

Fixed::Fixed( Fixed const &ret_obj ) {
	*this = ret_obj;
}

Fixed::~Fixed(void) {

}

Fixed::Fixed( const float converter ) {
	stock = (int)roundf(converter * (1 << this->eight_bits));
}

Fixed Fixed::operator=(const Fixed &b) {
	if (this != &b)
		this->stock = b.stock;
	return (*this);
}

int Fixed::toInt( void ) const {
	return (stock >> eight_bits);
}

std::ostream &operator<<(std::ostream& os, const Fixed& dt) {
	os << dt.toFloat();
	return (os);
}

float Fixed::toFloat( void ) const {
	return (stock / (pow(2, 8)));
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
	return (this->stock < compare.stock);
}

bool Fixed::operator>(const Fixed &compare) {
	return (this->stock > compare.stock);
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
	return (Fixed(this->toInt() - b.toInt()));
}

Fixed Fixed::operator++( int ) {
	Fixed	copy;
	copy.stock = this->stock;
	this->stock++;
	return (copy);
}

Fixed &Fixed::operator++( void ) {
	this->stock++;
	return (*this);
}

Fixed Fixed::operator--( int ) {
	Fixed	copy;
	copy.stock = this->stock;
	this->stock--;
	return (copy);
}

Fixed &Fixed::operator--( void ) {
	this->stock--;
	return (*this);
}

bool Fixed::operator>=(const Fixed &rightnode) {
	return (this->stock >= rightnode.stock);
}

bool Fixed::operator!=(const Fixed &rightnode) {
	return (this->stock != rightnode.stock);
}

bool Fixed::operator<=(const Fixed &rightnode) {
	return (this->stock <= rightnode.stock);
}

bool Fixed::operator==(const Fixed &rightnode) {
	return (this->stock == rightnode.stock);
}

const Fixed	&Fixed::min(const Fixed &first, const Fixed &sec) {
	if (first.stock < sec.stock)
		return (first);
	return (sec);
}

const Fixed	&Fixed::max(const Fixed &first, const Fixed &sec) {
	if (first.stock < sec.stock)
		return (sec);
	return (first);
}
