/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:10:44 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/25 20:10:46 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#define	st_ std::string

#define RED    "\x1b[1;31m"
#define CYAN    "\x1b[1;36m"
#define RESET    "\x1b[0m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"

class DiamondTrap : public ScavTrap, public FragTrap {
	private :
		st_	name;
	public :
		DiamondTrap();
		DiamondTrap( st_ name );
		DiamondTrap( DiamondTrap *copy );
		void whoAmI();
		~DiamondTrap();
		void attack( const st_ &target );
		DiamondTrap &operator=(const DiamondTrap &b);
};

# endif
