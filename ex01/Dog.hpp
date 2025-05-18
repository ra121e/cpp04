/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:40:14 by athonda           #+#    #+#             */
/*   Updated: 2025/05/18 16:50:16 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog :
	public Animal
{
public:
	Dog();
	Dog(const std::string &type);
	Dog(const Dog &other);
	Dog	&operator=(const Dog &other);
	~Dog();

	void	makeSound();
	Brain	*getBrain();
private:
	Brain	*brain;
};
