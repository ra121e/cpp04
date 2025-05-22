/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:15:38 by athonda           #+#    #+#             */
/*   Updated: 2025/05/22 13:39:59 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	std::cout << "===== Brain test =====" << std::endl;
	Brain	a;
	a.setIdeas(0, "crazy");
	a.setIdeas(1, "berserk");
//	a.getIdeas(100, "wrong");

	Brain	b(a);
	Brain	c;

	c = a;

	for (int i = 0; i < 100; ++i)
	{
		std::cout << "Brain: a ideas[" << i << "] is " << a.getIdeas(i) << std::endl;
	}

	for (int i = 0; i < 100; ++i)
	{
		std::cout << "Brain: b ideas[" << i << "] is " << b.getIdeas(i) << std::endl;
	}

	for (int i = 0; i < 100; ++i)
	{
		std::cout << "Brain: c ideas[" << i << "] is " << c.getIdeas(i) << std::endl;
	}

//	===== Brain test with combined class =====
//	Dog	a;
//	Dog b(a);
//	Dog c;
//
//	c = a;
//
//	for (int i = 0; i < 100; ++i)
//	{
//		std::cout << "Brain: a ideas[" << i << "] is" << a.getBrain()->getIdeas(i) << std::endl;
//	}
//
//	for (int i = 0; i < 100; ++i)
//	{
//		std::cout << "Brain: b ideas[" << i << "] is" << b.getBrain()->getIdeas(i) << std::endl;
//	}
//
//	for (int i = 0; i < 100; ++i)
//	{
//		std::cout << "Brain: c ideas[" << i << "] is" << c.getBrain()->getIdeas(i) << std::endl;
//	}

	std::cout << "===== test derived instances =====" << std::endl;
	Cat	d;
	d.setIdeas(0, "crazy");
	d.setIdeas(1, "berserk");
	Cat e(d);
	Cat f;

	f = d;

	for (int i = 0; i < 100; ++i)
	{
		std::cout << "Cat: d ideas[" << i << "] is " << d.getIdeas(i) << std::endl;
	}

	for (int i = 0; i < 100; ++i)
	{
		std::cout << "Cat: e ideas[" << i << "] is " << e.getIdeas(i) << std::endl;
	}

	for (int i = 0; i < 100; ++i)
	{
		std::cout << "Cat: f ideas[" << i << "] is " << f.getIdeas(i) << std::endl;
	}

	std::cout << "===== test mandatory case by newed variables =====" << std::endl;
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	j->makeSound();
	i->makeSound();

	delete (j);
	delete (i);

	std::cout << "===== test Animal array by auto variables" << std::endl;
	Dog		akita;
	akita.getBrain()->setIdeas(0, "I am akita");

	Cat		calico;
	calico.getBrain()->setIdeas(0, "calico always sleepy");

	Cat		mike;
	mike.getBrain()->setIdeas(0, "mike is hungry");

	Dog		cogi;
	cogi.getBrain()->setIdeas(0, "cogi loves hunting!!");

	// wrap with animal pointer
	Animal	*animal[4];

	animal[0] = &akita;
	animal[1] = &calico;
	animal[2] = &mike;
	animal[3] = &cogi;

	std::cout << std::endl << "Here are the voices of the animals." << std::endl;
	for(int i = 0; i < 4; ++i)
	{
		animal[i]->makeSound();
		std::cout << animal[i]->getType() << " has an idea as " << animal[i]->getIdeas(0) << std::endl;
	}
	std::cout << "sounds correct!!." << std::endl << std::endl;


	std::cout << "===== test const for Base pointer and test deep copy =====" << std::endl;

	Cat	abyssinian(mike);
	Cat	siamese(mike);
	Cat	persian(calico);

	siamese = persian;

	Dog	husky(akita);
	Dog	pug(akita);
	Dog	doberman(cogi);

	pug = doberman;

	Animal const	*pets[4] =
	{
		&husky,
		&pug,
		&abyssinian,
		&siamese
	};

	std::cout << std::endl << "Here are the voices of the animals." << std::endl;
	for(int i = 0; i < 4; ++i)
	{
		pets[i]->makeSound();
		std::cout << pets[i]->getType() << " has an idea as " << pets[i]->getIdeas(0) << std::endl;
	}
	std::cout << "sounds correct!!." << std::endl << std::endl;

	return (0);
}