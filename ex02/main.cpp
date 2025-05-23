/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 23:03:47 by athonda           #+#    #+#             */
/*   Updated: 2025/05/23 10:56:26 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

void printBanner(const std::string& title) {
    std::cout << "\n--- " << title << " ---" << std::endl;
}

int main() {
	std::cout << "===== test Animal class instance =====" << std::endl;
	//Animal testAnimal;
	std::cout << "Animal testAnimal;" << std::endl;
	std::cout << "(The line 'Animal testAnimal;' is commented out to allow compilation.)" << std::endl;
	std::cout << "(To verify, uncomment it and compilation should fail.)" << std::endl;


	std::cout << "===== test same to ex01  =====" << std::endl;
	const int num_animals = 4; // Reduced for brevity, can be any even number
	Animal* animals[num_animals];
	std::cout << "\nCreating Dogs for the first half:" << std::endl;
	for (int k = 0; k < num_animals / 2; ++k) {
		animals[k] = new Dog();
	}
	std::cout << "\nCreating Cats for the second half:" << std::endl;
	for (int k = num_animals / 2; k < num_animals; ++k) {
		animals[k] = new Cat();
	}
	std::cout << "\nAnimals making sounds and showing types:" << std::endl;
	for (int k = 0; k < num_animals; ++k) {
		std::cout << "Type: " << animals[k]->getType() << " -> ";
		animals[k]->makeSound(); // Polymorphic call
	}

	{
		std::cout << "\nEntering new scope..." << std::endl;
		Dog stackDog;
		Cat stackCat;
		stackDog.makeSound();
		stackCat.makeSound();
		std::cout << "Exiting scope... Destructors for stackDog, stackCat (and their Brains) will be called." << std::endl;
	}


	printBanner("All tests finished.");
	// Destructors for originalDog, copiedDog, assignedDog (and their Brains) will be called here.
	return 0;
}