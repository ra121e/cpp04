/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:12:10 by athonda           #+#    #+#             */
/*   Updated: 2025/05/14 22:56:17 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() :
	Animal("Dog")
{}

Dog::Dog(const std::string &type) :
	Animal(type)
{
	std::cout << "Dog " << _type << " default constructor called." << std::endl;
}

Dog::Dog(const Dog &other) :
	Animal(other)
{
	std::cout << "Dog " << _type << " copy constructor called." << std::endl;
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		std::cout << "Dog " << _type << " copy asignment operator called." << std::endl;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog " << _type << " destructor called." << std::endl;
}

void	Dog::makeSound()
{
	std::cout << "Dog " << _type << " wan wan!! " << std::endl;
}