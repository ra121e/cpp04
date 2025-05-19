/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:24:46 by athonda           #+#    #+#             */
/*   Updated: 2025/05/19 18:25:26 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() :
	AMateria("Ice")
{}

Ice::Ice(std::string const &type) :
	AMateria(type)
{}

Ice::Ice(const Ice &other) :
	AMateria(other)
{}

Ice::~Ice()
{}

AMateria	*Ice::clone() const
{
	return(new Ice);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "Ice: \"* shoots an ice bolt at " << target << " *\"" << std::endl;
}