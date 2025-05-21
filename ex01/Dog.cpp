/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:42:31 by athonda           #+#    #+#             */
/*   Updated: 2025/05/21 23:18:24 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() :
	Animal("Dog")
{
	std::cout << "Dog " << _type << " default constructor called." << std::endl;
	Brain	*brain = new Brain();
	this->_brain = brain;
}

Dog::Dog(const Dog &other) :
	Animal(static_cast<const Animal&>(other))
{
	std::cout << "Dog " << _type << " copy constructor called." << std::endl;
	Brain	*brain = new Brain(*(other._brain));
	this->_brain = brain;
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		std::cout << "Dog " << _type << " copy asignment operator called." << std::endl;
		Animal::operator=(static_cast<const Animal&>(other));
		this->_type = other._type;
		delete (this->_brain);
		Brain	*brain = new Brain(*(other._brain));
		this->_brain = brain;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog " << _type << " destructor called." << std::endl;
	delete(this->_brain);
}

void	Dog::makeSound() const
{
	std::cout << "Dog " << _type << " wan wan!! " << std::endl;
}

Brain	*Dog::getBrain()
{
	return (this->_brain);
	std::cout << "Dog " << _type << " get brain pointer. " << std::endl;
}

void	Dog::setIdeas(int i, std::string const &idea)
{
	this->_brain->setIdeas(i, idea);
}

std::string	const &Dog::getIdeas(int i) const
{
	return (this->_brain->getIdeas(i));
}