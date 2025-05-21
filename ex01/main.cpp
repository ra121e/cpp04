/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:15:38 by athonda           #+#    #+#             */
/*   Updated: 2025/05/21 23:19:57 by athonda          ###   ########.fr       */
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

	std::cout << "===== test Animal array by auto variables" << std::endl;
	Dog		akita;
	akita.getBrain()->setIdeas(0, "Cute is best");

	Cat		carico;
	carico.getBrain()->setIdeas(0, "sleepy");

	Cat		mike;
	mike.getBrain()->setIdeas(0, "hungry");

	Dog		cogi;
	cogi.getBrain()->setIdeas(0, "hunting!!");
	Animal	*animal[4];

	animal[0] = &akita;
	animal[1] = &carico;
	animal[2] = &mike;
	animal[3] = &cogi;

	std::cout << std::endl << "Here are the voices of the animals." << std::endl;
	for(int i = 0; i < 4; ++i)
	{
		animal[i]->makeSound();
		std::cout << animal[i]->getType() << " has an idea as " << animal[i]->getIdeas(0) << std::endl;
	}
	std::cout << "sounds correct!!." << std::endl << std::endl;

	return (0);
}