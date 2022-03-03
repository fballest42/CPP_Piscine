/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:08:35 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/27 19:53:30 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("dog")
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_brain = new Brain();
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->setType(copy.getType());
	*(this->_brain) = *(copy._brain);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

Dog &Dog::operator=(const Dog &op)
{
	std::cout << "Dog assingation operator called" << std::endl;
	if (this == &op)
		return *this;
	this->setType(op.getType());
	*(this->_brain) = *(op._brain);
	return *this;
}

void		Dog::makeSound(void) const
{
	std::cout << "Woooof ... I love you." << std::endl;
}

Brain	*Dog::getBrain(void) const
{
	return this->_brain;
}

void	Dog::setBrain(Brain *brain)
{
	this->_brain = brain;
}