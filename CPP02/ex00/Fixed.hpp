/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:40:50 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/20 20:40:51 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {
	private:
		int stock;
		static const int eight_bits;
	public:
		Fixed(void);
		Fixed(Fixed &as_arg);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		Fixed &operator=(const Fixed &b);
		~Fixed(void);
};

#endif
