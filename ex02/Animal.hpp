/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 23:02:56 by athonda           #+#    #+#             */
/*   Updated: 2025/05/22 17:26:19 by athonda          ###   ########.fr       */
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

	virtual void	makeSound() const = 0;
	std::string		getType(void) const;
	void			setIdeas(int i, std::string const &idea);
	std::string	const &getIdeas(int i) const;

protected:
	std::string	_type;
};
