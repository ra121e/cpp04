/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:56:09 by athonda           #+#    #+#             */
/*   Updated: 2025/05/13 16:31:48 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Animal
{
public:
	Animal(const std::string &type);
	Animal(const Animal &other);
	Animal	&operator=(const Animal &other);
	~Animal();

	void	makeSound();
	std::string	getType(void);

protected:
	std::string	_type;
};