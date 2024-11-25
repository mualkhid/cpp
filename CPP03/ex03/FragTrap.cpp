/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:10:52 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/25 20:10:53 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap("MedAitSwa") {
	std::cout << YELLOW "FragTrap Default constructor Called" RESET << std::endl;
	this->Hit_Point = 100;
	this->Energy_Point = 100;
	this->Attack_Damage = 30;
}

FragTrap::FragTrap( FragTrap *copy ) {
	*this = copy;
}

FragTrap::FragTrap( st_ name ) {
	std::cout << YELLOW "FragTrap Constructor Called" RESET << std::endl;
	this->name = name;
	this->Hit_Point = 100;
	this->Energy_Point = 100;
	this->Attack_Damage = 30;
}

FragTrap::~FragTrap() {
	std::cout << YELLOW "Destructor Called" RESET << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &b) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &b)
		this->name = b.name;
	return (*this);
}

void FragTrap::highFivesGuys(void) {
	std::cout << CYAN "FragTrap " << this->name << RESET " wants to high five everyone" << std::endl;
}
