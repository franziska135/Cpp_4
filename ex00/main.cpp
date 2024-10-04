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
    std::cout << "--------------------------------------\nTest 1: Animal base class and two derived classe: dog and cat\n--------------------------------------" << std::endl;
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

    std::cout << std::endl;

    std::cout << "--------------------------------------\nTest 2 with 'wrongAnimal' class not using the virtual keyword\n--------------------------------------" << std::endl;   //const WrongAnimal* mammal2 = new WrongAnimal();
    const WrongAnimal* mammal2 = new WrongAnimal();
    const WrongAnimal* cat2 = new WrongCat();
    const WrongCat cat3;
    std::cout << std::endl;

    std::cout << mammal2->getType() << " " << std::endl;
    std::cout << cat2->getType() << " " << std::endl;
    std::cout << cat3.getType() << " " << std::endl;

    std::cout << std::endl;

    mammal2->makeSound();
    cat2->makeSound();
    cat3.makeSound();
    std::cout << std::endl;
    
    delete mammal;
    delete cat;
    delete dog;
    delete cat2;
    delete mammal2;
    return 0;
}