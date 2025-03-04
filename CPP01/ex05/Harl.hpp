/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:39:46 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/08 18:33:35 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef	HARL_HPP
#define	HARL_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#define	st_	std::string

class Harl {
	private :
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public :
		void complain( std::string level );
};

#endif
