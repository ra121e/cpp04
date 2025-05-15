/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athonda <athonda@student.42singapore.sg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 08:42:31 by athonda           #+#    #+#             */
/*   Updated: 2025/05/15 12:06:22 by athonda          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Brain
{
public:
	Brain();
	Brain(const Brain &other);
	Brain	&operator=(const Brain &other);
	~Brain();

	const std::string	&getIdeas(int i);
private:
	std::string ideas[100];
};