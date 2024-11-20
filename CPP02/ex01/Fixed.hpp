/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:41:08 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/20 20:41:09 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>
#include <ostream>

class Fixed {
private:
	int stock;
	static const int eight_bits;

public:
	Fixed( void );
	Fixed( Fixed const &ret_obj );
	Fixed( const int converter );
	Fixed( const float converter );
	float toFloat( void ) const;
	int toInt( void ) const;
	~Fixed(void);

	Fixed &operator=(const Fixed &b);
};

std::ostream &operator<<(std::ostream& os, const Fixed& dt);

#endif
