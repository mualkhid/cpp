/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:38:20 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/08 17:13:18 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>
#define st_ std::string

int main() {
	st_ 	str = "HI THIS IS BRAIN";
	st_		*stringPTR = &str;
	st_		&stringREF = str;

	std::cout << "Address : " << &str << std::endl;
	std::cout << "Address : " << stringPTR << std::endl;
	std::cout << "Address : " << &stringREF << std::endl;
	std::cout << "Value : " << str << std::endl;
	std::cout << "Value : " << *stringPTR << std::endl;
	std::cout << "Value : " << stringREF << std::endl;
}
