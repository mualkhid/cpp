/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:39:31 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/08 19:21:58 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#define	st_	std::string

void	location(char **args, std::ofstream &file, std::fstream &read, bool &replaced) {
    std::string line;
	std::string	replace;
	std::string	search;

	replace = args[3];
	search = args[2];
	while (std::getline(read, line)) {
		size_t	index = 0;
		bool lineReplaced = false;
		while (((index = line.find(search, index)) != std::string::npos && search.compare(""))) {
			line = line.substr(0, index) + replace + line.substr(search.length() + index);
			index += replace.length();
			lineReplaced = true;
		}
		 if (lineReplaced) {
            replaced = true;
        }
		file << line << std::endl;
	}
	file.close();
}

int main(int argc, char **args) {
	std::fstream	reading;
	st_				filename;
	bool replaced = false;

	if (argc != 4) {
		std::cout << "Not enough arguments" << std::endl;
		return (0);
	}

	filename = ".replace";

	reading.open(args[1]);

    if (!reading.is_open()) {
        std::cout << "Can not open the file." << std::endl;
        return (0);
    }

	std::ofstream file((args[1] + filename).c_str());
	if (!file.is_open()) {
		std::cout << "Can not create the file." << std::endl;
		return (0);
	}

	if (reading.peek() == std::ifstream::traits_type::eof()) {
        std::cout << "File is empty." << std::endl;
        reading.close();
        file.close();
        return (0);
    }

	location(args, file, reading, replaced);
	reading.close();

	if (!replaced) {
        std::cout << "Error: Search string not found in the file." << std::endl;
        std::remove((args[1] + filename).c_str());
        return (0);
    }

    std::cout << "File processed successfully." << std::endl;
    return 0;
}
