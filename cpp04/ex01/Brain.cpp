/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:07:47 by fballest          #+#    #+#             */
/*   Updated: 2022/03/04 11:28:31 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain have been constructed." << std::endl;
}

Brain::Brain(const Brain &copy)
{
	int		i;

	i = 0;
	std::cout << "Brain copy have been constructed." << std::endl;
	while (i < 100)
	{
		this->idea[i] = copy.idea[i];
		i++;
	}
}

Brain &Brain::operator=(const Brain &equal)
{
	std::cout << "An equal Brain have been constructed." << std::endl;
		int		i = 0;
	if (this == &equal)
		return (*this);
	while (i < 100)
	{
		this->idea[i] = equal.idea[i];
		i++;
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain have been destructed." << std::endl;	
}
