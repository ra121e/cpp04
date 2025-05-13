/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 18:55:25 by athonda           #+#    #+#             */
/*   Updated: 2025/05/13 18:58:08 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(const std::string &type) :
	WrongAnimal(type)
{
	std::cout << "WrongCat " << _type << " default constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) :
	WrongAnimal(other)
{
	std::cout << "WrongCat " << _type << " copy constructor called." << std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		std::cout << "WrongCat " << _type << " copy asignment operator called." << std::endl;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat " << _type << " destructor called." << std::endl;
}

void	WrongCat::makeSound()
{
	std::cout << "WrongCat " << _type << " Nya~ Nya~ " << std::endl;
}
