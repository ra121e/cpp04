/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:36:24 by athonda           #+#    #+#             */
/*   Updated: 2025/05/14 22:57:05 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() :
	Animal("Cat")
{}

Cat::Cat(const std::string &type) :
	Animal(type)
{
	std::cout << "Cat " << _type << " default constructor called." << std::endl;
}

Cat::Cat(const Cat &other) :
	Animal(other)
{
	std::cout << "Cat " << _type << " copy constructor called." << std::endl;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		std::cout << "Cat " << _type << " copy asignment operator called." << std::endl;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat " << _type << " destructor called." << std::endl;
}

void	Cat::makeSound()
{
	std::cout << "Cat " << _type << " Nya~ Nya~ " << std::endl;
}
