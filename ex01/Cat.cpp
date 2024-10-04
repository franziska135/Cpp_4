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
    _brain = new Brain();
    _type = "Cat";
    std::cout   << "Cat default constructor" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other), _brain(NULL) {
    std::cout   << "Cat copy constructor" << std::endl;
    _type = other._type;
    if (other._brain)
        _brain = new Brain (*other._brain);
}

Cat& Cat::operator=(const Cat& other) {
    if (this != &other) {
        _type = other._type;
        if (_brain) {
            delete _brain;
        }
        _brain = new Brain();
    }
    std::cout   << "Cat copy assignment constructor" << std::endl;
    return *this;
}

//destructor
Cat::~Cat(void) {
    delete _brain;
    std::cout    << "Cat destructor" << std::endl;
}

//member functions
void    Cat::makeSound(void) const {
    std::cout   << "<<Meooooow>>" << std::endl;
}