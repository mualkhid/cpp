/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:37:40 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/08 17:13:18 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie*	newZombie( std::string name ) {
	Zombie	*ptr;

	ptr = new Zombie(name);
	return (ptr);
}
