/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:09:25 by athonda           #+#    #+#             */
/*   Updated: 2025/05/19 18:22:57 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice :
	public AMateria
{
	public:
		Ice();
		Ice(std::string const &type);
		Ice(const Ice &other);
		Ice	&operator=(const Ice &other);
		~Ice();

		AMateria	*clone() const;
		void		use(ICharacter &target);

	private:
};