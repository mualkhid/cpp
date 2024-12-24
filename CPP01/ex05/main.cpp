/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:39:51 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/08 18:35:37 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av) {
    Harl level;

    if (ac != 2) {
        std::cout << "Arguments Error" << std::endl;
        return (1);
    }

    level.complain(av[1]);
    return (0);
}
