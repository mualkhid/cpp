/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHord.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:38:13 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/20 20:38:14 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ) {
	Zombie	*Zmb;

	Zmb = new Zombie[N];
	for (int i = 0; i < N; i++) {
		Zmb[i].set(name);
	}
	return (Zmb);
}
