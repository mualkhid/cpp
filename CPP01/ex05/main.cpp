/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:39:51 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/20 20:39:55 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int main(int ac, char **av) {
	Harl	ptr;
	st_		nb;

	nb = av[1];
	if (ac != 2 || nb.length() > 1 || !isdigit(nb[0])) {
		std::cout << "Arguments Error" << std::endl;
		return (0);
	}
	if (std::stoi(av[1]) > 4 || std::stoi(av[1]) == 0) {
		std::cout << "Index Error" << std::endl;
		return (0);
	}
	ptr.complain(av[1]);
}
