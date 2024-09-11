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

#include "WrongAnimal.hpp"

//constructors
WrongAnimal::WrongAnimal(void) {
    _type = "mammal";
    std::cout   << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
    *this = other;
    std::cout   << "WrongAnimal copy constructor" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
    if (this != &other) {
        _type = other._type;
    }
    std::cout   << "Animal copy assignment constructor" << std::endl;
    return *this;
}

//destructor
WrongAnimal::~WrongAnimal(void) {
    std::cout    << "WrongAnimal destructor" << std::endl;
}

//member ft
std::string    WrongAnimal::getType(void) const {
    return (_type);
}

void    WrongAnimal::makeSound() const {
    std::cout   << "<<representative wrong animal sound>>" << std::endl;
}