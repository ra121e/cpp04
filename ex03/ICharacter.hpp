/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 18:32:09 by athonda           #+#    #+#             */
/*   Updated: 2025/05/20 09:02:16 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter();
		virtual std::string const	&getName() const = 0;
		virtual void				equip(AMateria *m) = 0;
//		virtual void				unequip(int idx) = 0;
//		virtual void				use(int idx, ICharacter &target) = 0;
};