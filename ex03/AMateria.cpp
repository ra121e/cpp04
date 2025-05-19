/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 08:40:39 by athonda           #+#    #+#             */
/*   Updated: 2025/05/19 23:30:59 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() :
	_type("noType")
{
	std::cout << "AMateria: type: " << _type << " default constructor called." << std::endl;
}

AMateria::AMateria(std::string const &type) :
	_type(type)
{
	std::cout << "AMateria: type: " << _type << " parameterized constructor called." << std::endl;
}

AMateria::AMateria(const AMateria &other) :
	_type(other._type)
{
	std::cout << "AMateria: type: " << _type << " copy constructor called." << std::endl;
}

//AMateria	&AMateria::operator=(const AMateria &other)
//{
//	if (this != &other)
//	{
//		this->_type = other._type;
//		std::cout << "AMateria: type: " << _type << " copy assignment operator called." << std::endl;
//	}
//	return (*this);
//}

AMateria::~AMateria()
{
	std::cout << "AMateria: type: " << _type << " destructor called." << std::endl;
}

std::string const	&AMateria::getType() const
{
	return (this->_type);
}

AMateria	*AMateria::clone() const
{
	return(new AMateria(*this));
}
