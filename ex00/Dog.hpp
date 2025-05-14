/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:41:08 by athonda           #+#    #+#             */
/*   Updated: 2025/05/14 22:56:15 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

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
private:
};