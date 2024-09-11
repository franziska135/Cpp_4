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
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
    const int   amtAnimals = 10;
    const int   halfAmt = amtAnimals / 2;
    Animal      *animals[amtAnimals];
    
    for (int i = 0; i < halfAmt; ++i) {
        animals[i] = new Dog();
    }
    for (int i = halfAmt; i < amtAnimals; ++i) {
        animals[i] = new Cat();
    }
    
    std::cout << std::endl;
    for (int i = 0; i < amtAnimals; ++i) {
        std::cout << i << " " << animals[i]->getType() << " ";
        animals[i]->makeSound();
    }

    std::cout << std::endl;

    for (int i = 0; i < amtAnimals; ++i) {
        delete animals[i];
    }
}