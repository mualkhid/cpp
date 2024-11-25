/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:10:19 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/25 20:10:20 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

int main() {
	ClapTrap john("John");
	ClapTrap jim("Jim");
	ClapTrap joe("hoe");
	FragTrap johny;

	john.attack(NULL);
	john.attack("Bart");
	john.attack("Homer");
	john.takeDamage(5);
	jim.takeDamage(9);
	jim.takeDamage(10);
	joe.beRepaired(10);
	joe.takeDamage(19);
	johny.attack("zb");
	johny.highFivesGuys();
}
