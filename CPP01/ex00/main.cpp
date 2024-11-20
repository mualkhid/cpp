/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:37:35 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/20 20:37:36 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Zombie.hpp"

int main() {
	Zombie	*ptr;

	ptr = newZombie("Hamid");
	ptr->announce();
	randomChump("Joe");
	delete ptr;
}
