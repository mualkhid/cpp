/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:37:59 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/08 17:40:33 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"
#define N 20

int main() {
	Zombie	*Zombies;
	Zombie	*Zombies_Ahmed;
	Zombies = zombieHorde(5, "Reem");
	Zombies_Ahmed = zombieHorde(N, "Munia");

	for (int index = 0; index < 5; index++)
		Zombies->annonce();

	for (int index = 0; index < N; index++)
		Zombies_Ahmed->annonce();

	delete[] Zombies;
	delete[] Zombies_Ahmed;
}

