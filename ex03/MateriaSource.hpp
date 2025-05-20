/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 12:37:54 by athonda           #+#    #+#             */
/*   Updated: 2025/05/20 13:17:58 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

class MateriaSource :
	public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &other);
		MateriaSource	&operator=(const MateriaSource &other);
		~MateriaSource();

		void		learnMateria(AMateria *m);
		AMateria	*createMateria(std::string const &type);

	private:
		AMateria	*_notebook[4];

};