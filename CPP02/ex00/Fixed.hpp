/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:40:50 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/24 12:20:21 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>


class Fixed {
	private:
		int fixed_point;
		static const int eight_bits;
	public:
		Fixed(void);
		Fixed(const Fixed &as_arg);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		Fixed &operator=(const Fixed &b);
		~Fixed(void);
};

#endif
