/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 21:18:55 by athonda           #+#    #+#             */
/*   Updated: 2025/05/21 14:03:55 by athonda          ###   ########.fr       */
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
	void	makeSound() const;
private:
	Brain	*_brain;
};