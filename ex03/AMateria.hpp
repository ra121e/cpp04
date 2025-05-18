/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 07:53:16 by athonda           #+#    #+#             */
/*   Updated: 2025/05/19 07:58:27 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class AMateria
{
	protected:
		std::string	type;

	public:
		AMateria(std::string const &type);
		AMateria();
		AMateria(const Amateria &other);
		Amateria	&operator=(const AMateria &other);
		virtual ~AMateria();

		std::string const &getType() const;

		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
}