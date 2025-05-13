/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:11:39 by athonda           #+#    #+#             */
/*   Updated: 2025/05/13 17:42:49 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

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

	return (0);
}