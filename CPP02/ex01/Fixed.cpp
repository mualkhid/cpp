/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:41:03 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/20 20:41:04 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int Fixed::eight_bits = 8;

Fixed::Fixed( const int converter )
{
	std::cout << "Int constructor called" << std::endl;
	stock = converter << eight_bits;
}

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	stock = 0;
}

Fixed::Fixed( Fixed const &ret_obj )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = ret_obj;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const float converter )
{
	std::cout << "Float constructor called" << std::endl;
	stock = (int)roundf(converter * (pow(2, 8)));
}

Fixed &Fixed::operator=(const Fixed &b)
{
	std::cout << "Copy assignment operator called" << std::endl;
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
