/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:40:21 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/20 20:40:22 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

const int Fixed::eight_bits = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	stock = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Default destructor called" << std::endl;
	stock = 0;
}

Fixed::Fixed(Fixed &as_arg)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = as_arg;
}

Fixed &Fixed::operator=(const Fixed &b)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &b)
		this->stock = b.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (stock);
}

void Fixed::setRawBits(int const raw)
{
	this->stock = raw;
}
