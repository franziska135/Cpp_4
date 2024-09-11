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
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
    const Animal* mammal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    std::cout << std::endl;
    std::cout << mammal->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    std::cout << dog->getType() << " " << std::endl;
    std::cout << std::endl;
    //calls derived calss dog/cat through pointer to Animal and correct makeSound
    mammal->makeSound();
    cat->makeSound();
    dog->makeSound();
    // return 0;

    const WrongAnimal* mammal2 = new WrongAnimal();
    const WrongAnimal* cat2 = new WrongCat();
    std::cout << std::endl;
    std::cout << mammal2->getType() << " " << std::endl;
    std::cout << cat2->getType() << " " << std::endl;
    std::cout << std::endl;
    //calls the base because makeSound is not declared virtual
    mammal2->makeSound();
    cat2->makeSound();
    return 0;
}