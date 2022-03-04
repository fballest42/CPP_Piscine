/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:18:09 by fballest          #+#    #+#             */
/*   Updated: 2022/03/04 11:51:30 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(void): Animal("Cat")
{
	std::cout << "Cat have been constructed." << std::endl;
	this->_brain = new Brain;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Cat copy have been constructed." << std::endl;
	this->setType(copy.getType());
	this->_brain = copy._brain;
}

Cat &Cat::operator=(const Cat &equal)
{
	std::cout << "An equal Cat have been constructed." << std::endl;
	if (this == &equal)
		return (*this);
	this->setType(equal.getType());
	this->_brain = equal._brain;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat have been destructed." << std::endl;
	delete this->_brain;
}

void	 Cat::makeSound(void) const
{
	std::cout << "Cat sound is Miau Miau." << std::endl;
}

Brain	*Cat::getBrain(void) const
{
	return this->_brain;
}

void	Cat::setBrain(Brain *brain)
{
	this->_brain = brain;
}
