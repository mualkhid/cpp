/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:22:28 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/20 13:22:30 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
	int			i;
	phonebook	div;
	st	input;

	input = "";
	i = 0;
	while (1)
	{
		std::cout << BLUE "COMMANDS : " RESET << CYAN "ADD | SEARCH | EXIT " RESET << std::endl;
		std::cout << RED "Enter one : " RESET;
		if (!std::getline(std::cin, input))
			return (0);
		if (!input.compare("EXIT"))
			return (0);
		if (!input.compare("ADD"))
			i = add_contact(&div, i);
		if (i > 7)
			i = 0;
		if (!input.compare("SEARCH"))
			search_contact(&div);
	}
	return (0);
}
