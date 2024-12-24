/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mualkhid <mualkhid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 20:41:54 by mualkhid          #+#    #+#             */
/*   Updated: 2024/12/23 12:56:49 by mualkhid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"


bool bsp( Point const a, Point const b, Point const c, Point const p );

int main() {


    Point a(Fixed(0), Fixed(0));
    Point b(Fixed(5), Fixed(0));
    Point c(Fixed(0), Fixed(5));
    Point p(Fixed(1), Fixed(1));

    std::cout << CYAN << "Test 1: Point inside the triangle" << RESET << std::endl;
    if (bsp(a, b, c, p)) {
        std::cout << GREEN << "The point is inside the triangle!" << RESET << std::endl;
    } else {
        std::cout << RED << "The point is outside the triangle." << RESET << std::endl;
    }

    std::cout << std::endl;

    Point p2(Fixed(5), Fixed(2.5f));

    std::cout << CYAN << "Test 2: Point on the edge of the triangle" << RESET << std::endl;
    if (bsp(a, b, c, p2)) {
        std::cout << GREEN << "The point is inside the triangle!" << RESET << std::endl;
    } else {
        std::cout << RED << "The point is outside the triangle." << RESET << std::endl;
    }

    std::cout << std::endl;

    Point p3(Fixed(6), Fixed(6));

    std::cout << CYAN << "Test 3: Point outside the triangle" << RESET << std::endl;
    if (bsp(a, b, c, p3)) {
        std::cout << GREEN << "The point is inside the triangle!" << RESET << std::endl;
    } else {
        std::cout << RED << "The point is outside the triangle." << RESET << std::endl;
    }

    std::cout << std::endl;

    Point p4(Fixed(2), Fixed(2));

    std::cout << CYAN << "Test 4: Another point inside the triangle" << RESET << std::endl;
    if (bsp(a, b, c, p4)) {
        std::cout << GREEN << "The point is inside the triangle!" << RESET << std::endl;
    } else {
        std::cout << RED << "The point is outside the triangle." << RESET << std::endl;
    }

    std::cout << std::endl;

    return 0;
}
