/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:11:05 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/25 20:11:07 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
	ClapTrap john("John");
	ClapTrap jim("Jim");
	ClapTrap joe;
	ScavTrap jane;
	FragTrap joseph;
	DiamondTrap	daniel;

	john.attack("Marge");
	john.attack("Bart");
	john.attack("Homer");
	john.takeDamage(5);
	jim.takeDamage(9);
	jim.takeDamage(10);
	joe.beRepaired(10);
	joe.takeDamage(19);
	jane.attack("Lisa");
	jane.takeDamage(99);
	jane.beRepaired(50);
	jane.GuardGate();
	joseph.attack("Maggie");
	joseph.takeDamage(99);
	joseph.beRepaired(50);
	joseph.highFivesGuys();
	daniel.attack("Ned");
	daniel.takeDamage(5);
	daniel.beRepaired(3);
	daniel.GuardGate();
	daniel.highFivesGuys();
	daniel.whoAmI();
}
