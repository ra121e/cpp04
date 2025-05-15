/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 11:15:38 by athonda           #+#    #+#             */
/*   Updated: 2025/05/15 12:10:50 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

int	main(void)
{
	Brain	a;
	Brain	b(a);
	Brain	c;

	c = a;

	for (int i = 0; i < 100; ++i)
	{
		std::cout << "Brain: a ideas[" << i << "] is" << a.getIdeas(i) << std::endl;
	}

	for (int i = 0; i < 100; ++i)
	{
		std::cout << "Brain: b ideas[" << i << "] is" << b.getIdeas(i) << std::endl;
	}

	for (int i = 0; i < 100; ++i)
	{
		std::cout << "Brain: c ideas[" << i << "] is" << c.getIdeas(i) << std::endl;
	}

	return (0);
}