/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 18:53:17 by athonda           #+#    #+#             */
/*   Updated: 2025/05/14 23:07:37 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() :
	_type("Zygote")
{}

WrongAnimal::WrongAnimal(const std::string &type) :
	_type(type)
{
	std::cout << "WrongAnimal " << type << " default constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) :
	_type(other._type)
{
	std::cout << "WrongAnimal " << _type << " copy constructor called." << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		std::cout << "WrongAnimal " << _type << " copy asignment operator called." << std::endl;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal " << _type << " destructor called." << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal " << _type << " fjqowejfa;ojfaoiejfoiajfeoiewajfo " << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}
