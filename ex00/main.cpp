/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:11:39 by athonda           #+#    #+#             */
/*   Updated: 2025/05/21 13:02:52 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"


int	main(void)
{

	std::cout << "===== start test Animals =====" << std::endl;
	const Animal* a = new Animal();
	const Animal* b = new Dog();
	const Animal* c = new Cat();

	std::cout << b->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;

	std::cout << "this is " << a->getType() << std::endl;
	std::cout << "here is the voice " << std::endl;
	a->makeSound();


	std::cout << "this is " << b->getType() << std::endl;
	std::cout << "here is the voice " << std::endl;
	b->makeSound(); //will output the cat sound!


	std::cout << "this is " << c->getType() << std::endl;
	std::cout << "here is the voice " << std::endl;
	c->makeSound();

	delete a;
	delete b;
	delete c;

	std::cout << "===== start test Wrong Animals =====" << std::endl;
	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* j = new WrongDog();
	const WrongAnimal* i = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
	return (0);
}