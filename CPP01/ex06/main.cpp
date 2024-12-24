/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:40:11 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/08 17:13:18 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int main(int ac, char **av) {
	Harl	ptr;

	if (ac != 2) {
		std::cout << "Arguments Error" << std::endl;
		return (0);
	}
	ptr.complain(av[1]);
}
