/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:10:39 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/22 19:45:29 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap("Munia") {
	std::cout << YELLOW "DiamondTrap Default constructor Called" RESET << std::endl;
	this->Hit_Point = FragTrap::Hit_Point;
	this->Energy_Point = ScavTrap::Energy_Point;
	this->Attack_Damage = FragTrap::Attack_Damage;
}

DiamondTrap::DiamondTrap( st_ name ) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap() {
	std::cout << YELLOW "DiamondTrap Constructor Called" RESET << std::endl;
	this->Hit_Point = FragTrap::Hit_Point;
	this->Energy_Point = ScavTrap::Energy_Point;
	this->Attack_Damage = FragTrap::Attack_Damage;
}

DiamondTrap::DiamondTrap( DiamondTrap *copy ) {
	*this = copy;
}

void DiamondTrap::whoAmI() {
	std::cout << "I'm DiamondTrap : " RED << ClapTrap::name + "_clap_name" << RESET << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &b) {
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	if (this != &b)
		this->name = b.name;
	return (*this);
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << YELLOW "DiamondTrap Destructor Called" RESET << std::endl;
}


void DiamondTrap::attack( const st_ &target )
{
	ScavTrap::attack(target);
}
