/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 11:45:27 by athonda           #+#    #+#             */
/*   Updated: 2025/05/20 12:40:56 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual				~IMateriaSource();
		virtual void		learnMateria(AMateria *) = 0;
		virtual AMateria	*createMateria(std::string const &type) = 0;
};