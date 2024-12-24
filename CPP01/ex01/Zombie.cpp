/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:38:03 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/08 17:13:18 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

void	Zombie::set( st n ) {
	name = n;
}

Zombie::Zombie(st name) {
	this->name = name;
}

Zombie::Zombie() {

}

Zombie::~Zombie() {
	std::cout << "Zombie : " << name << " Got Destroyed" << std::endl;
}

void	Zombie::annonce(void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
