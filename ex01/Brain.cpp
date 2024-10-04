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

#include "Brain.hpp"

//constructors
Brain::Brain(void) {
    std::cout   << "Brain default constructor" << std::endl;
    for (int i = 0; i < 100; i++) {
        _idea[i] = "";
    }
}

Brain::Brain(const Brain& other) {
    *this = other;
    std::cout   << "Brain copy constructor" << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
    if (this != &other) {
        for (int i = 0; i < 100; i++) {
            _idea[i] = other.getIdea(i);
        }
    }
    std::cout   << "Brain copy assignment constructor" << std::endl;
    return *this;
}

//destructor
Brain::~Brain(void) {
    std::cout    << "Brain destructor" << std::endl;
}

std::string Brain::getIdea(int i) const {
    return (_idea[i]);
}