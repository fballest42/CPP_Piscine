/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 15:07:47 by fballest          #+#    #+#             */
/*   Updated: 2022/03/03 15:28:26 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain have been constructed." << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain copy have been constructed." << std::endl;
	this->setIdea(copy.getIdea());
}

Brain::Brain(const std::string type): _type(type)
{
	std::cout << "Brain have been constructed, and this assigned idea = " << this->getIdea() << std::endl;	
}

Brain &Brain::operator=(const Brain &equal)
{
	std::cout << "An equal Brain have been constructed." << std::endl;
	if (this == &equal)
		return (*this);
	this->setIdea(equal.getIdea());
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain have been destructed." << std::endl;	
}

void Brain::setIdea(std::string idea)
{
	this->_idea = idea;
}

std::string Brain::getIdea(void) const
{
	return (this->_idea);
}
