/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:22:09 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/07 15:38:08 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int count, char **str)
{
	int		j;

	if (count == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for (int i = 1; str[i]; i++)
	{
		for (j = 0; str[i][j]; j++)
			std::cout << (char)toupper(str[i][j]);
	}
	std::cout << "\n";
	return (0);
}
