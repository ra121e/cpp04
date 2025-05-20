/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:48:09 by athonda           #+#    #+#             */
/*   Updated: 2025/05/20 17:04:21 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Cure :
	public AMateria
{
	public:
		Cure();
		Cure(std::string const &type);
		Cure(const Cure &other);
		~Cure();

		AMateria	*clone() const;
		void		use(ICharacter &target);

	private:
};