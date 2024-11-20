/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:38:38 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/20 20:38:39 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

void	HumanB::attack() {
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon ) {
	this->weapon = &weapon;
}

HumanB::HumanB( ) {

}

HumanB::HumanB( st_ nm ) {
	name = nm;
}

HumanB::~HumanB() {

}
