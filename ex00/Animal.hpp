/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:56:09 by athonda           #+#    #+#             */
/*   Updated: 2025/05/20 20:32:33 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Animal
{
public:
	Animal();
	Animal(const std::string &type);
	Animal(const Animal &other);
	Animal	&operator=(const Animal &other);
	virtual ~Animal();

	virtual void	makeSound() const;
	std::string		getType(void) const;

protected:
	std::string	_type;
};