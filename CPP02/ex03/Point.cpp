/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:41:58 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/18 19:01:15 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"
#include "Fixed.hpp"

Point::Point( void ) : _x( 0 ), _y( 0 )
{
	if ( PRINT_MESSAGE == 1 )
		std::cerr << CYAN "Point default constructor called." RESET << std::endl;
	return ;
}

Point::Point( Fixed const x, Fixed const y ) : _x( x ), _y( y )
{
	if ( PRINT_MESSAGE == 1 )
		std::cerr << CYAN "Point fixed constructor called." RESET << std::endl;
	return ;
}

Point::Point( Point const & src ) : _x( src.getX() ), _y( src.getY() )
{
	if ( PRINT_MESSAGE == 1 )
		std::cerr << CYAN "Point copy constructor called." RESET << std::endl;
	return ;
}

Point::~Point( void )
{
	if ( PRINT_MESSAGE == 1 )
		std::cerr << CYAN "Point destructor called." RESET << std::endl;
	return ;
}

Point &	Point::operator=( Point const & rhs )
{
	if ( PRINT_MESSAGE == 1 )
		std::cerr << PURPLE "Point assignment operator called." RESET << std::endl;
	std::cerr << "Warning: cannot assign to Point const attributes. "
		"Use a Point copy constructor instead." << std::endl;
	(void)rhs;
	return ( *this );
}


Fixed const &	Point::getX( void ) const
{
	return ( this->_x );
}

Fixed const &	Point::getY( void ) const
{
	return ( this->_y );
}
