/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:10:19 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/22 19:43:56 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

int main() {
	ClapTrap yumna("yumna");
	ClapTrap mena("mena");
	ClapTrap reem("reem");
	FragTrap mai;

	yumna.attack("a");
	yumna.attack("b");
	yumna.takeDamage(5);
	mena.takeDamage(9);
	mena.takeDamage(10);
	reem.beRepaired(10);
	reem.takeDamage(19);
	mai.attack("c");
	mai.highFivesGuys();
}
