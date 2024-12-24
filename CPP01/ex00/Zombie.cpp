/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:37:48 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/08 17:13:18 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie( st name ) {
	this->name = name;
}

Zombie::Zombie() {
}

Zombie::~Zombie() {
	std::cout << this->name << " Got Destroyed." << std::endl;
}

void Zombie::announce( void ) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
