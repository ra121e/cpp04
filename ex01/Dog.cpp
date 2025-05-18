/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:42:31 by athonda           #+#    #+#             */
/*   Updated: 2025/05/18 20:58:16 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() :
	Animal("Dog")
{
	std::cout << "Dog " << _type << " default constructor called." << std::endl;
	Brain	*brain = new Brain();
	this->brain = brain;
}

Dog::Dog(const Dog &other) :
	Animal(static_cast<const Animal&>(other))
{
	std::cout << "Dog " << _type << " copy constructor called." << std::endl;
	Brain	*brain = new Brain(*(other.brain));
	this->brain = brain;
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		std::cout << "Dog " << _type << " copy asignment operator called." << std::endl;
		Animal::operator=(static_cast<const Animal&>(other));
		this->_type = other._type;
		delete (this->brain);
		Brain	*brain = new Brain(*(other.brain));
		this->brain = brain;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog " << _type << " destructor called." << std::endl;
	delete(this->brain);
}

void	Dog::makeSound()
{
	std::cout << "Dog " << _type << " wan wan!! " << std::endl;
}

Brain	*Dog::getBrain()
{
	return (this->brain);
	std::cout << "Dog " << _type << " get brain pointer. " << std::endl;
}