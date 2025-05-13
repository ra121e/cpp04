/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 17:35:38 by athonda           #+#    #+#             */
/*   Updated: 2025/05/13 17:36:13 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat :
	public Animal
{
public:
	Cat(const std::string &type);
	Cat(const Cat &other);
	Cat	&operator=(const Cat &other);
	~Cat();

	void	makeSound();
private:
};
