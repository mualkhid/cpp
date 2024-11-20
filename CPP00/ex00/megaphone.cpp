/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:22:09 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/20 13:22:11 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int count, char **strings)
{
	int		j;

	if (count == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
		return (0);
	}
	for (int i = 1; strings[i]; i++)
	{
		for (j = 0; strings[i][j]; j++)
			std::cout << (char)toupper(strings[i][j]);
	}
	return (0);
}
