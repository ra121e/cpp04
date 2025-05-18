/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 21:18:55 by athonda           #+#    #+#             */
/*   Updated: 2025/05/18 21:47:59 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat :
	public Animal
{
public:
	Cat();
	Cat(const Cat &other);
	Cat	&operator=(const Cat &other);
	~Cat();

	Brain	*getBrain();
	void	makeSound();
private:
	Brain	*_brain;
};