/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:09:44 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/25 20:09:45 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

#define	st_ std::string

#define RED    "\x1b[1;31m"
#define CYAN    "\x1b[1;36m"
#define RESET    "\x1b[0m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"

class ScavTrap : public ClapTrap {
	public :
		ScavTrap();
		ScavTrap( st_ name );
		ScavTrap( ScavTrap *copy );
		void attack( const st_ &target );
		void GuardGate( void );
		~ScavTrap( void );
		ScavTrap &operator=(const ScavTrap &b);
};

# endif
