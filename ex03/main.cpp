/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 09:03:50 by athonda           #+#    #+#             */
/*   Updated: 2025/05/20 09:32:34 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int	main(void)
{
//	AMateria	a;
//	AMateria	b;
//	AMateria	c("Kuin");
//	AMateria	d(c);
//	AMateria	e;
//
////	e = c; //becasue const, no assignmnet
//
//	std::cout << "a: type is " << a.getType() << std::endl;
//	std::cout << "b: type is " << b.getType() << std::endl;
//	std::cout << "c: type is " << c.getType() << std::endl;
//	std::cout << "d: type is " << d.getType() << std::endl;
//	std::cout << "e: type is " << e.getType() << std::endl;

	Ice	a("Eleazar no Kama");
	std::cout << "Ice a: type is " << a.getType() << std::endl;

	AMateria	*b;
	b = a.clone();
	std::cout << "Ice b: type is " << b->getType() << std::endl;

//	AMateria	c;
//	std::cout << "Materia c: type is " << c.getType() << std::endl;

	Character	d;
	std::cout << "Character d: name is " << d.getName() << std::endl;

	Character	e("Kirio");
	std::cout << "Character e: name is " << e.getName() << std::endl;

	e.equip(b);
	std::cout << "Character e: " << e.getName() << " is equipping b " << b->getType() << std::endl;

	return (0);
}