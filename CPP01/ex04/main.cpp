/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:39:31 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/20 20:39:34 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <algorithm>
#define	st_	std::string

void		location(char **args, std::ofstream &file, std::fstream &read) {
    std::string line;
	std::string	replace;
	std::string	search;

	replace = args[3];
	search = args[2];
	while (std::getline(read, line)) {
		size_t	index = 0;
		while (((index = line.find(search, index)) != std::string::npos && search.compare(""))) {
			line = line.substr(0, index) + replace + line.substr(search.length() + index);
			index += replace.length();
		}
		file << line << std::endl;
	}
	file.close();
}

int main(int argc, char **args) {
	int				i;
	std::fstream	reading;
	st_				filename;
	st_				stock;

	i = 0;
	if (argc != 4) {
		std::cout << "Not enough arguments" << std::endl;
		return (0);
	}
	filename = "replace.";
	std::ofstream	file(filename + args[1]);
	reading.open( args[1] );
	if (!reading.is_open()) {
		std::cout << "Error in fd" << std::endl;
		return (0);
	}
	if (!file.is_open()) {
		std::cout << "Error in fd1" << std::endl;
		return (0);
	}
	location(args, file, reading);
	reading.close();
}
