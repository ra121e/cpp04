/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:11:39 by athonda           #+#    #+#             */
/*   Updated: 2025/05/13 19:15:37 by athonda          ###   ########.fr       */
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
	Animal	a("Monster");
	Animal	b("Titan");
	Animal	c(a);
	Animal	d(a);

	d = b;

	std::cout << "a: " << a.getType() << std::endl;
	std::cout << "b: " << b.getType() << std::endl;
	std::cout << "c: " << c.getType() << std::endl;
	std::cout << "d: " << d.getType() << std::endl;

	a.makeSound();

	Dog dog("Welsh Corgi");
	dog.makeSound();
	Cat cat("Mikeneko");
	cat.makeSound();


	const WrongAnimal* meta = new WrongAnimal("Mt.Everest");
	const WrongAnimal* j = new WrongDog("Caaaat");
	const WrongAnimal* i = new WrongCat("Dooooog");

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