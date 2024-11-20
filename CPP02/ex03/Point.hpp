/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:42:03 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/20 20:42:04 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef POINT_CLASS_H
# define POINT_CLASS_H

# include "Fixed.hpp"

class	Point
{
	public:
		Point( void );
		Point( Fixed const x, Fixed const y );
		Point( Point const & src );
		~Point( void );

		Point & operator=( Point const & src );

		Fixed const &	getX( void ) const;
		Fixed const &	getY( void ) const;

	private:
		Fixed const	_x;
		Fixed const	_y;
};

#endif
