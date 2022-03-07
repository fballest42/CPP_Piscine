/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:18:16 by fballest          #+#    #+#             */
/*   Updated: 2022/03/07 09:49:59 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog have been constructed." << std::endl;
	this->_type = "dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog copy have been constructed." << std::endl;
	this->setType(copy.getType());
	*(this->_brain) = *(copy._brain);
}

Dog &Dog::operator=(const Dog &equal)
{
	std::cout << "An equal Dog have been constructed." << std::endl;
	if (this == &equal)
		return (*this);
	this->setType(equal.getType());
	this->_brain = equal._brain;
	return (*this);
}

Animal	&Dog::operator=(Animal const &eq)
{
	std::cout << "Animal assignation operator for dog called" << std::endl;
	this->_type = eq.getType();
	this->setBrain(eq.getBrain());
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog have been destructed." << std::endl;
	delete this->_brain;
}

void	 Dog::makeSound(void) const
{
	std::cout << "Dog sound is Guau Guau." << std::endl;
}
Brain	*Dog::getBrain(void) const
{
	return (this->_brain);
}

void	Dog::setBrain(Brain *brain)
{
	this->_brain = brain;
}
