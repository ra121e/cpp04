/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:11:39 by athonda           #+#    #+#             */
/*   Updated: 2025/05/20 20:27:16 by athonda          ###   ########.fr       */
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

	const Animal* a = new Animal();
	const Animal* b = new Dog();
	const Animal* c = new Cat();

	std::cout << b->getType() << " " << std::endl;
	std::cout << c->getType() << " " << std::endl;
	b->makeSound(); //will output the cat sound!
	c->makeSound();
	a->makeSound();

	delete a;
	delete b;
	delete c;

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