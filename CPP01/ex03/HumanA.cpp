/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:38:28 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/20 20:38:29 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"

void	HumanA::attack() {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}

HumanA::HumanA( st_ nm, Weapon &weapon ) : name(nm), weapon(weapon) {
}

HumanA::~HumanA() {
}
