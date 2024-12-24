/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:11:05 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/22 20:07:11 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
	ClapTrap reem("reem");
	ClapTrap mai("mai");
	ClapTrap yumna;
	ScavTrap maha;
	FragTrap mena;
	DiamondTrap	rasha;

	reem.attack("a");
	reem.attack("b");
	reem.attack("c");
	reem.takeDamage(5);
	mai.takeDamage(9);
	mai.takeDamage(10);
	yumna.beRepaired(10);
	yumna.takeDamage(19);
	maha.attack("d");
	maha.takeDamage(99);
	maha.beRepaired(50);
	maha.GuardGate();
	mena.attack("e");
	mena.takeDamage(99);
	mena.beRepaired(50);
	mena.highFivesGuys();
	rasha.attack("f");
	rasha.takeDamage(5);
	rasha.beRepaired(3);
	rasha.GuardGate();
	rasha.highFivesGuys();
	rasha.whoAmI();
}
