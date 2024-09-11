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

#include "Dog.hpp"

//constructors
Dog::Dog(void) : Animal() {
    _type = "Dog";
    _brain = new Brain();
    std::cout   << "Dog default constructor" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {
    std::cout   << "Dog copy constructor" << std::endl;
    *this = other;
}

Dog& Dog::operator=(const Dog& other) {
    if (this != &other) {
        _type = "Dog";
        if (_brain) {
            delete _brain;
        }
        _brain = new Brain();
    }
    std::cout   << "Dog copy assignment constructor" << std::endl;
    return *this;
}

//destructor
Dog::~Dog(void) {
    delete _brain;
    std::cout    << "Dog destructor" << std::endl;
}

//member ft
void    Dog::makeSound(void) const {
    std::cout   << "<<Woof Wooof>>" << std::endl;
}