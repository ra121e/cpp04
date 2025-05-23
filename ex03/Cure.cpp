/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:51:26 by athonda           #+#    #+#             */
/*   Updated: 2025/05/21 11:09:41 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() :
	AMateria("cure")
{
}

Cure::Cure(std::string const &type) :
	AMateria(type)
{

}

Cure::Cure(const Cure &other) :
	AMateria(other)
{

}

Cure::~Cure()
{

}

AMateria	*Cure::clone() const
{
	return (new Cure(*this));
}

void		Cure::use(ICharacter &target)
{
	std::cout << "Cure: \"* heals " << target.getName() << " ’s wounds *\"" << std::endl;
}