/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 18:59:52 by athonda           #+#    #+#             */
/*   Updated: 2025/05/13 19:00:56 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog(const std::string &type) :
	WrongAnimal(type)
{
	std::cout << "WrongDog " << _type << " default constructor called." << std::endl;
}

WrongDog::WrongDog(const WrongDog &other) :
	WrongAnimal(other)
{
	std::cout << "WrongDog " << _type << " copy constructor called." << std::endl;
}

WrongDog	&WrongDog::operator=(const WrongDog &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		std::cout << "WrongDog " << _type << " copy asignment operator called." << std::endl;
	}
	return (*this);
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog " << _type << " destructor called." << std::endl;
}

void	WrongDog::makeSound()
{
	std::cout << "WrongDog " << _type << " wan wan!! " << std::endl;
}
