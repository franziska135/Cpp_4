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

#include "Cat.hpp"

//constructors
Cat::Cat(void) : Animal() {
    _type = "Cat";
    std::cout   << "Cat default constructor" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other) {
    std::cout   << "Cat copy constructor" << std::endl;
    *this = other;
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        _type = other._type;
    }
    std::cout   << "Cat copy assignment constructor" << std::endl;
    return *this;
}

//destructor
Cat::~Cat(void) {
    std::cout    << "Cat destructor" << std::endl;
}

//member functions
void    Cat::makeSound(void) const {
    std::cout   << "<<Meooooow>>" << std::endl;
}