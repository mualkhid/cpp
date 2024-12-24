/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:40:21 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/24 12:20:10 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int Fixed::eight_bits = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	fixed_point = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &as_arg)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = as_arg;
}

Fixed &Fixed::operator=(const Fixed &b)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &b)
		this->fixed_point = b.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixed_point);
}

void Fixed::setRawBits(int const raw)
{
	this->fixed_point = raw;
}
