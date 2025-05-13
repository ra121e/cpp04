/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:03:52 by athonda           #+#    #+#             */
/*   Updated: 2025/05/13 19:04:05 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(const std::string &type) :
	_type(type)
{
	std::cout << "Animal " << type << " default constructor called." << std::endl;
}

Animal::Animal(const Animal &other) :
	_type(other._type)
{
	std::cout << "Animal " << _type << " copy constructor called." << std::endl;
}

Animal	&Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->_type = other._type;
		std::cout << "Animal " << _type << " copy asignment operator called." << std::endl;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal " << _type << " destructor called." << std::endl;
}

void	Animal::makeSound(void)
{
	std::cout << "Animal " << _type << " fjqowejfa;ojfaoiejfoiajfeoiewajfo " << std::endl;
}

std::string	Animal::getType(void)
{
	return (this->_type);
}