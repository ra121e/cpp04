/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 19:52:04 by athonda           #+#    #+#             */
/*   Updated: 2025/05/20 16:03:56 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character :
	public ICharacter
{
	public:
		Character();
		Character(const std::string &name);
		Character(const Character &other);
		Character	&operator=(const Character &other);
		~Character();

		std::string const	&getName() const;
		void				equip(AMateria *m);
//		void				unequip(int idex);
		void				use(int idx, ICharacter &target);
	private:
		AMateria			*_inventory[4];
		std::string	_name;

};