/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:08:41 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/22 19:39:53 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"

int main()
{
	ClapTrap reem;
	ClapTrap maha("maha");
	ClapTrap mai("mai");
	ScavTrap yumna("yumna");

	reem.attack("a");
	reem.attack("b");
	reem.attack("c");
	reem.takeDamage(5);
	maha.takeDamage(9);
	maha.takeDamage(10);
	mai.beRepaired(10);
	mai.takeDamage(19);
	yumna.attack("d");
	yumna.takeDamage(99);
	yumna.beRepaired(50);
	yumna.GuardGate();
}
