/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:27:17 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/25 20:27:19 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	std::cout << RED "MateriaSource Default Constructor" RESET << std::endl;
	for (int i = 0; i < 4; i++) {
		slots[i] = NULL;
	}
}

MateriaSource::MateriaSource( const MateriaSource &copy ) {
	std::cout << RED "MateriaSource Default Constructor" RESET << std::endl;
	*this = copy;
}

void	MateriaSource::learnMateria(AMateria *copy) {
	if (copy == NULL)
		return ;
	for (int i = 0; i < 4; i++) {
		if (slots[i] == NULL) {
			slots[i] = copy;
			break ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (slots[i] && slots[i]->getType() == type)
			return (slots[i]->clone());
	}
	return (NULL);
}

MateriaSource &MateriaSource::operator=(const MateriaSource &b) {
	std::cout << RED "Copy assignment operator called" RESET << std::endl;
	if (this != &b) {
		for (int i = 0; i < 4; i++)
		{
			// delete slots[i];
			// slots[i] = NULL;
			if (b.slots[i] != NULL)
				slots[i] = b.slots[i]->clone();
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource( void ) {
	std::cout << "MateriaSource Destructor Called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->slots[i] != NULL)
			delete slots[i];
	}
}
