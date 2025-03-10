/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:42:22 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/22 15:19:38 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

int main() {
  	ClapTrap reem("reem");
	ClapTrap mai("mai");
	ClapTrap maha;

	reem.attack("a");
	reem.attack("b");
	reem.attack("c");
	reem.takeDamage(5);
	mai.takeDamage(9);
	mai.takeDamage(10);
	maha.beRepaired(10);
	maha.takeDamage(19);
	maha.attack("munia");
}
