/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 07:53:16 by athonda           #+#    #+#             */
/*   Updated: 2025/05/22 20:45:34 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria(std::string const &type);
		AMateria();
		AMateria(const AMateria &other);
		AMateria	&operator=(const AMateria &other); // becasue const
		virtual ~AMateria();

		std::string const &getType() const;

		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
};