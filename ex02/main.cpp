/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 23:03:47 by athonda           #+#    #+#             */
/*   Updated: 2025/05/18 23:09:25 by athonda          ###   ########.fr       */
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
    printBanner("Test: Attempting to instantiate Animal (should fail at compile time)");
     Animal testAnimal; // This line should cause a compilation error because Animal is abstract.
    // std::cout << "If you see this, Animal was instantiated (which is wrong)." << std::endl;
    // To test this, you would uncomment the line above and try to compile.
    // For a runnable program, we keep it commented.
    std::cout << "(The line 'Animal testAnimal;' is commented out to allow compilation.)" << std::endl;
    std::cout << "(To verify, uncomment it and compilation should fail.)" << std::endl;


    printBanner("Polymorphic Array of Animals (Dogs and Cats)");
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

//    std::cout << "\nTesting Dog's ideas via Animal pointer:" << std::endl;
//    // To access Dog-specific methods like setIdea/getIdea through Animal*,
//    // you would need to downcast, which is generally not good practice without type checking.
//    // However, for this test, if we are sure of the type:
//    if (num_animals > 0 && animals[0]->getType() == "Dog") {
//        Dog* firstDog = static_cast<Dog*>(animals[0]); // Use dynamic_cast in more complex scenarios
//        firstDog->setIdea(0, "A brilliant idea from a Dog!");
//        std::cout << "Dog's Idea[0]: " << firstDog->getIdea(0) << std::endl;
//    }
//
//
//    std::cout << "\nDeleting all animals (destructors should be called in order):" << std::endl;
//    for (int k = 0; k < num_animals; ++k) {
//        delete animals[k];
//        animals[k] = NULL;
//    }
//
//    printBanner("Deep Copy Test (Dog) - OCF Check");
//    std::cout << "\nCreating originalDog:" << std::endl;
//    Dog originalDog;
//    originalDog.setIdea(0, "Original Dog Idea");
//    originalDog.setIdea(1, "Another Original Dog Idea");
//    std::cout << "OriginalDog Idea[0]: " << originalDog.getIdea(0) << std::endl;
//
//    std::cout << "\nCreating copiedDog from originalDog (Copy Constructor):" << std::endl;
//    Dog copiedDog = originalDog;
//    std::cout << "CopiedDog Idea[0] (should be same as original): " << copiedDog.getIdea(0) << std::endl;
//
//    std::cout << "\nModifying originalDog's Idea[0]:" << std::endl;
//    originalDog.setIdea(0, "MODIFIED Original Dog Idea");
//    std::cout << "OriginalDog Idea[0] (now modified): " << originalDog.getIdea(0) << std::endl;
//    std::cout << "CopiedDog Idea[0] (should be UNCHANGED): " << copiedDog.getIdea(0) << std::endl;
//
//
//    std::cout << "\nCreating assignedDog and assigning originalDog to it (Assignment Operator):" << std::endl;
//    Dog assignedDog; // Default construction
//    std::cout << "AssignedDog Idea[0] (before assignment): " << assignedDog.getIdea(0) << std::endl; // Shows default brain idea
//    assignedDog = originalDog; // Assignment
//    std::cout << "AssignedDog Idea[0] (after assignment, should match originalDog's modified idea): " << assignedDog.getIdea(0) << std::endl;
//
//    std::cout << "\nModifying originalDog's Idea[0] again:" << std::endl;
//    originalDog.setIdea(0, "SUPER MODIFIED Original Dog Idea");
//    std::cout << "OriginalDog Idea[0] (modified again): " << originalDog.getIdea(0) << std::endl;
//    std::cout << "CopiedDog Idea[0] (still UNCHANGED from its copy time): " << copiedDog.getIdea(0) << std::endl;
//    std::cout << "AssignedDog Idea[0] (should be 'MODIFIED Original Dog Idea'): " << assignedDog.getIdea(0) << std::endl;
//
//    // Similar test for Cat can be added.

    printBanner("Scope test for stack objects (Dog and Cat)");
    {
        std::cout << "Entering new scope..." << std::endl;
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