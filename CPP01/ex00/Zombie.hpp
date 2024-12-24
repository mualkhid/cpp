/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:37:53 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/07 19:57:59 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#define st std::string


class Zombie {
	private :
		st	name;
	public :
		Zombie();
		Zombie( st nm );
		~Zombie();
		void announce( void );
};

Zombie*	newZombie( st name );
void	randomChump( st name );

#endif
