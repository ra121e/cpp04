/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 09:03:50 by athonda           #+#    #+#             */
/*   Updated: 2025/05/19 09:45:12 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

int	main(void)
{
	AMateria	a;
	AMateria	b;
	AMateria	c("Kuin");
	AMateria	d(c);
	AMateria	e;

//	e = c; //becasue const, no assignmnet

	std::cout << "a: type is " << a.getType() << std::endl;
	std::cout << "b: type is " << b.getType() << std::endl;
	std::cout << "c: type is " << c.getType() << std::endl;
	std::cout << "d: type is " << d.getType() << std::endl;
	std::cout << "e: type is " << e.getType() << std::endl;
	return (0);
}