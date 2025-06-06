/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:10:29 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/22 19:44:43 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Munia") {
	std::cout << YELLOW "ClapTrap Default constructor Called" RESET << std::endl;
	Hit_Point = 10;
	Energy_Point = 10;
	Attack_Damage = 0;
}

ClapTrap::ClapTrap( st_ name ) {
	std::cout << YELLOW "ClapTrap Constructor Called" RESET << std::endl;
	this->name = name;
	Hit_Point = 10;
	Energy_Point = 10;
	Attack_Damage = 0;
}

void	ClapTrap::attack( const st_ &target ) {
	if (this->Energy_Point != 0 && this->Hit_Point > 0) {
		std::cout << CYAN "ClapTrap " << this->name << RESET << " attacks " << CYAN << target << RESET << ", causing " << RED << this->Attack_Damage << " point of damage" RESET << std::endl;
		this->Energy_Point--;
		std::cout << BLUE "Energy left : " << this->Energy_Point << RESET << std::endl;
	}
	else if (this->Energy_Point == 0)
		std::cout << CYAN "ClapTrap " << this->name << RESET << RED " Does not have enough Energy Point" RESET << std::endl;
	else if (this->Hit_Point == 0)
		std::cout << RED "ClapTrap " << this->name << " is dead" RESET << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if ((int)amount >= 0 && this->Hit_Point > 0) {
		std::cout << CYAN "ClapTrap " << this->name << RESET << " took " << RED << amount << " of the damage " RESET << std::endl;
		this->Hit_Point -= amount;
		if (this->Hit_Point < 0)
			this->Hit_Point = 0;
		std::cout << BLUE "HP Left : " << this->Hit_Point << RESET << std::endl;
	}
	if (this->Hit_Point == 0)
		std::cout << RED "ClapTrap " << this->name << " is dead" RESET << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->Energy_Point != 0) {
		this->Hit_Point = amount;
		this->Energy_Point--;
		std::cout << CYAN "ClapTrap " << this->name << RESET " Regen his HP to : " << GREEN << amount << " HP" << RESET << std::endl;
		std::cout << BLUE "Energy left : " << this->Energy_Point << RESET << std::endl;
	}
	else
		std::cout << RED "Not Enough Energy Point" RESET << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &b) {
	std::cout << "ClapTrap Copy assignment operator called" << std::endl;
	if (this != &b)
		this->name = b.name;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << YELLOW "ClapTrap Destructor Called" RESET << std::endl;
}
