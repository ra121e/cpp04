/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 20:00:41 by athonda           #+#    #+#             */
/*   Updated: 2025/05/19 23:26:38 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() :
	_name("noName")
{
	for (int i = 0; i < 4; ++i)
	{
		_inventory[i] = NULL;
	}
}

Character::Character(const std::string &name) :
	_name(name)
{
	for (int i = 0; i < 4; ++i)
	{
		this->_inventory[i] = NULL;
	}
}

Character::Character(const Character &other) :
	_name(other._name)
{
	for (int i = 0; i < 4; ++i)
	{
		if (other._inventory[i])
			this->_inventory[i] = other._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
}

Character	&Character::operator=(const Character &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; ++i)
		{
			delete (this->_inventory[i]);
			this->_inventory[i] = NULL;
		}
		for (int i = 0; i < 4; ++i)
		{
			if (other._inventory[i])
				this->_inventory[i] = other._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return (*this);
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
	{
		delete (this->_inventory[i]);
	}
}

std::string const	&Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; ++i)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			return ;
		}
	}
}