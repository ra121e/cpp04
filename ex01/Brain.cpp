/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 09:39:10 by athonda           #+#    #+#             */
/*   Updated: 2025/05/15 12:08:22 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() :
	ideas()
{
	std::cout << "Brain: defalt constructor called" <<std::endl;
}

Brain::Brain(const Brain &other) :
	ideas()
{
	int n = sizeof(ideas) / sizeof(ideas[0]);
	for(int i = 0; i < n; ++i)
	{
		ideas[i] = other.ideas[i];
	}
	std::cout << "Brain: copy constructor called" <<std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		int n = sizeof(ideas) / sizeof(ideas[0]);
		for(int i = 0; i < n; ++i)
		{
			ideas[i] = other.ideas[i];
		}
		std::cout << "Brain: copy assignment operator called" <<std::endl;
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain: destructor called" <<std::endl;
}

const std::string	&Brain::getIdeas(int i)
{
	return (this->ideas[i]);
}