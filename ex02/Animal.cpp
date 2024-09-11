/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmarggra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 19:52:12 by fmarggra          #+#    #+#             */
/*   Updated: 2024/09/07 19:52:13 by fmarggra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

//constructors
Animal::Animal(void) {
    _type = "Mammal";
    std::cout   << "Animal default constructor" << std::endl;
}

Animal::Animal(const Animal& other) {
    *this = other;
    std::cout   << "Animal copy constructor" << std::endl;
}

Animal& Animal::operator=(const Animal& other) {
    if (this != &other) {
        _type = other._type;
    }
    std::cout   << "Animal copy assignment constructor" << std::endl;
    return *this;
}

//destructor
Animal::~Animal(void) {
    std::cout    << "Animal destructor" << std::endl;
}

std::string    Animal::getType(void) const {
    return (_type);
}
