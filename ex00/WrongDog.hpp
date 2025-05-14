/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 18:58:34 by athonda           #+#    #+#             */
/*   Updated: 2025/05/14 23:08:01 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "WrongAnimal.hpp"

class WrongDog :
	public WrongAnimal
{
public:
	WrongDog();
	WrongDog(const std::string &type);
	WrongDog(const WrongDog &other);
	WrongDog	&operator=(const WrongDog &other);
	~WrongDog();

	void	makeSound();
private:
};
