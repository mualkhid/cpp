/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:41:43 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/24 12:21:57 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"


Fixed::Fixed( void ) : _raw( 0 )
{
	if ( PRINT_MESSAGE == 1 )
		std::cerr << CYAN "Default constructor called." RESET << std::endl;
	return ;
}

Fixed::Fixed( Fixed const & src )
{
	if ( PRINT_MESSAGE == 1 )
		std::cerr << CYAN "Copy constructor called." RESET << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed( int const n ) : _raw( n << _fractionalBits )
{
	if ( PRINT_MESSAGE == 1 )
		std::cerr << CYAN "Int constructor called." RESET << std::endl;
	return ;
}

Fixed::Fixed( float const f ) : _raw( roundf(f * (256)) )
{
	if ( PRINT_MESSAGE == 1 )
		std::cerr << CYAN "Float constructor called." RESET << std::endl;
	return ;
}

Fixed::~Fixed( void )
{
	if ( PRINT_MESSAGE == 1 )
		std::cerr << CYAN "Destructor called." RESET << std::endl;
	return ;
}

Fixed &	Fixed::operator=( Fixed const & src )
{
	if ( PRINT_MESSAGE == 1 )
		std::cerr << PURPLE "Copy assignment operator called." RESET << std::endl;
	if ( this != &src )
		this->_raw = src.getRawBits();
	return ( *this );
}

bool	Fixed::operator>( Fixed const & rhs ) const
{
	if ( this->_raw > rhs.getRawBits() )
		return ( true );
	return ( false );
}

bool	Fixed::operator<( Fixed const & rhs ) const
{
	if ( this->_raw < rhs.getRawBits() )
		return ( true );
	return ( false );
}

bool	Fixed::operator>=( Fixed const & rhs ) const
{
	if ( this->_raw >= rhs.getRawBits() )
		return ( true );
	return ( false );
}

bool	Fixed::operator<=( Fixed const & rhs ) const
{
	if ( this->_raw <= rhs.getRawBits() )
		return ( true );
	return ( false );
}

bool	Fixed::operator==( Fixed const & rhs ) const
{
	if ( this->_raw == rhs.getRawBits() )
		return ( true );
	return ( false );
}

bool	Fixed::operator!=( Fixed const & rhs ) const
{
	if ( this->_raw != rhs.getRawBits() )
		return ( true );
	return ( false );
}

Fixed	Fixed::operator+( Fixed const & rhs ) const
{
	return ( Fixed( this->toFloat() + rhs.toFloat() ) );
}

Fixed	Fixed::operator-( Fixed const & rhs ) const
{
	return ( Fixed( this->toFloat() - rhs.toFloat() ) );
}

Fixed	Fixed::operator*( Fixed const & rhs ) const
{
	return ( Fixed( this->toFloat() * rhs.toFloat() ) );
}

Fixed	Fixed::operator/( Fixed const & rhs ) const
{
	return ( Fixed( this->toFloat() / rhs.toFloat() ) );
}

Fixed &	Fixed::operator++( void )
{
	this->_raw += 1;
	return ( *this );
}

Fixed Fixed::operator++( int )
{
	Fixed	tmp( *this );

	++(*this);
	return ( tmp );
}

Fixed &	Fixed::operator--( void )
{
	this->_raw -= 1;
	return ( *this );
}

Fixed Fixed::operator--( int )
{
	Fixed	tmp( *this );

	--(*this);
	return ( tmp );
}

int	Fixed::getRawBits( void ) const
{
	if ( PRINT_MESSAGE == 1 )
		std::cerr << GREEN "getRawBits member function called." RESET << std::endl;
	return ( this->_raw );
}

void	Fixed::setRawBits( int const raw )
{
	if ( PRINT_MESSAGE == 1 )
		std::cerr << GREEN "setRawBits member funtion called." RESET << std::endl;
	this->_raw = raw;
	return ;
}

int		Fixed::toInt( void ) const
{
	return ( this->_raw >> Fixed::_fractionalBits );
}

float	Fixed::toFloat( void ) const
{
	return ( (float)this->_raw / (256) );
}

Fixed &	Fixed::min( Fixed & lhs, Fixed & rhs )
{
	if ( lhs <= rhs )
		return ( lhs );
	return ( rhs );
}

Fixed const &	Fixed::min( Fixed const & lhs, Fixed const & rhs )
{
	if ( lhs <= rhs )
		return ( lhs );
	return ( rhs );
}

Fixed &	Fixed::max( Fixed & lhs, Fixed & rhs )
{
	if ( lhs >= rhs )
		return ( lhs );
	return ( rhs );
}

Fixed const &	Fixed::max( Fixed const & lhs, Fixed const & rhs )
{
	if ( lhs >= rhs )
		return ( lhs );
	return ( rhs );
}

std::ostream& operator<<( std::ostream& os, const Fixed& number )
{
	os << number.toFloat();
	return ( os );
}
