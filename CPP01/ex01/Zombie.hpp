/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:38:08 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/07 20:01:12 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#define st std::string

class Zombie
{
	private:
		st	name;
	public:
		Zombie();
		Zombie(st name);
		void	annonce(void);
		void	set( st n );
		~Zombie();
};

Zombie* zombieHorde( int N, st name );

#endif
