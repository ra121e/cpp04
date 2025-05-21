/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/18 21:18:55 by athonda           #+#    #+#             */
/*   Updated: 2025/05/21 20:15:58 by athonda          ###   ########.fr       */
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

	Brain		*getBrain();
	void		makeSound() const;

	void		setIdeas(int i, std::string const &idea);
	std::string	const &getIdeas(int i) const;
private:
	Brain	*_brain;
};