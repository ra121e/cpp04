/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 09:39:10 by athonda           #+#    #+#             */
/*   Updated: 2025/05/21 19:49:57 by athonda          ###   ########.fr       */
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

void		Brain::setIdeas(int i, std::string const &idea)
{
	if (i >= 0 && i < 100)
	{
		this->ideas[i] = idea;
	}
	else
	{
		std::cout << "Brain array(ideas) accept index 0-99" << std::endl;
	}
}

std::string	const &Brain::getIdeas(int i) const
{
	if (i >= 0 && i < 100)
	{
		return (this->ideas[i]);
	}
	else
	{
		static std::string error = "Brain array(ideas) has index 0-99";
		return (error);
	}
}