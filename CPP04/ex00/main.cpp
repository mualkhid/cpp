/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 20:21:10 by mualkhid          #+#    #+#             */
/*   Updated: 2024/11/25 20:21:14 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const WrongAnimal * k = new WrongCat();

    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << CYAN "Wrongcat Test" RESET << std::endl;
    std::cout << k->getType() << " " << std::endl;
    k->makeSound();
}
