/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:37:35 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/08 17:36:57 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	Zombie	*ptr;

	ptr = newZombie("Munia");
	ptr->announce();
	randomChump("Reem");
	delete ptr;
	return (0);
}
