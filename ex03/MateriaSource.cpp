/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:47:41 by athonda           #+#    #+#             */
/*   Updated: 2025/05/20 13:39:35 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		this->_notebook[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (int i = 0; i < 4; ++i)
	{
		if (other._notebook[i])
			this->_notebook[i] = other._notebook[i];
		else
			this->_notebook[i] = NULL;
	}
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; ++i)
		{
			delete (this->_notebook[i]);
			this->_notebook[i] = NULL;
		}
		for (int i = 0; i < 4; ++i)
		{
			if (other._notebook[i])
				this->_notebook[i] = other._notebook[i]->clone();
			else
				this->_notebook[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
	{
		delete (this->_notebook[i]);
	}
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; ++i)
	{
		if (!this->_notebook[i])
		{
			this->_notebook[i] = m;
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (this->_notebook[i] && this->_notebook[i]->getType() == type)
		{
			return (this->_notebook[i]->clone());
		}
	}
	return (NULL);
}