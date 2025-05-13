/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 18:54:18 by athonda           #+#    #+#             */
/*   Updated: 2025/05/13 19:01:51 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongCat :
	public WrongAnimal
{
public:
	WrongCat(const std::string &type);
	WrongCat(const WrongCat &other);
	WrongCat	&operator=(const WrongCat &other);
	~WrongCat();

	void	makeSound();
private:
};
