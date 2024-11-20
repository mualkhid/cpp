/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:37:59 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/20 20:38:00 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"
#define N 20

int main() {
	Zombie	*Zombies;

	Zombies = zombieHorde(5, "Abdelmoula");
	for (int index = 0; index < N; index++)
		Zombies->annonce();
	delete[] Zombies;
}

