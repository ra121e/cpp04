/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 21:48:40 by athonda           #+#    #+#             */
/*   Updated: 2025/05/21 20:16:05 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() :
	Animal("Cat")
{
	std::cout << "Cat: " << this->_type << " default constructor called." << std::endl;
	Brain	*brain = new Brain();
	this->_brain = brain;
}

Cat::Cat(const Cat &other) :
	Animal(other)
{
	std::cout << "Cat: " << this->_type << " copy constructor called." << std::endl;
	Brain	*brain = new Brain(*(other._brain));
	this->_brain = brain;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		std::cout << "Cat: " << this->_type << " copy assignment operator called." << std::endl;
		Animal::operator=(other);
		delete (this->_brain);
		Brain	*brain = new Brain(*(other._brain));
		this->_brain = brain;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat: " << this->_type << " destructor called." << std::endl;
	delete (this->_brain);
}

void	Cat::makeSound() const
{
	std::cout << "Cat " << _type << " Nya~~ Nya~~" << std::endl;
}

Brain	*Cat::getBrain()
{
	std::cout << "Cat " << _type << " get brain pointer. " << std::endl;
	return (this->_brain);
}

void	Cat::setIdeas(int i, std::string const &idea)
{
	this->_brain->setIdeas(i, idea);
}

std::string	const &Cat::getIdeas(int i) const
{
	return (this->_brain->getIdeas(i));
}