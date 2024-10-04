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

#include "WrongCat.hpp"

//constructors
WrongCat::WrongCat(void) : WrongAnimal() {
    _type = "WrongCat";
    std::cout   << "WrongCat default constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    std::cout   << "WrongCat copy constructor" << std::endl;
    *this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
    if (this != &other) {
        _type = other._type;
    }
    std::cout   << "WrongCat copy assignment constructor" << std::endl;
    return *this;
}

//destructor
WrongCat::~WrongCat(void) {
    std::cout    << "WrongCat destructor" << std::endl;
}

//member ft
void    WrongCat::makeSound(void) const {
    std::cout   << "<<Wrong Meooooow>>" << std::endl;
}