/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:41:03 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/23 17:08:58 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int Fixed::eight_bits = 8;

Fixed::Fixed( const int converter )
{
	std::cout << "Int constructor called" << std::endl;
	fixed_point = converter << eight_bits;
}

Fixed::Fixed( void )
{
	std::cout << "Default constructor called" << std::endl;
	fixed_point = 0;
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
	fixed_point = (int)roundf(converter * (pow(2, 8)));
}

Fixed &Fixed::operator=(const Fixed &b)
{
	std::cout << "Copy assignment operator called" << std::endl;
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
 