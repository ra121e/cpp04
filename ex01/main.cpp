/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:15:38 by athonda           #+#    #+#             */
/*   Updated: 2025/05/18 22:40:24 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
//	Brain	a;
//	Brain	b(a);
//	Brain	c;
//
//	c = a;
//
//	for (int i = 0; i < 100; ++i)
//	{
//		std::cout << "Brain: a ideas[" << i << "] is" << a.getIdeas(i) << std::endl;
//	}
//
//	for (int i = 0; i < 100; ++i)
//	{
//		std::cout << "Brain: b ideas[" << i << "] is" << b.getIdeas(i) << std::endl;
//	}
//
//	for (int i = 0; i < 100; ++i)
//	{
//		std::cout << "Brain: c ideas[" << i << "] is" << c.getIdeas(i) << std::endl;
//	}

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

	Cat	a;
	Cat b(a);
	Cat c;

	c = a;

	for (int i = 0; i < 100; ++i)
	{
		std::cout << "Brain: a ideas[" << i << "] is" << a.getBrain()->getIdeas(i) << std::endl;
	}

	for (int i = 0; i < 100; ++i)
	{
		std::cout << "Brain: b ideas[" << i << "] is" << b.getBrain()->getIdeas(i) << std::endl;
	}

	for (int i = 0; i < 100; ++i)
	{
		std::cout << "Brain: c ideas[" << i << "] is" << c.getBrain()->getIdeas(i) << std::endl;
	}

	Animal	*animal[4];
	Dog		akita;
	Cat		carico;
	Cat		mike;
	Dog		shiba;

	animal[0] = &akita;
	animal[1] = &carico;
	animal[2] = &mike;
	animal[3] = &shiba;

	for(int i = 0; i < 4; ++i)
	{
		animal[i]->makeSound();
	}

	return (0);
}