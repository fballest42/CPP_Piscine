/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:08:00 by rcabezas          #+#    #+#             */
/*   Updated: 2022/03/04 11:50:32 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_brain = new Brain();
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->setType(copy.getType());
	this->_brain = *(copy._brain);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

Cat &Cat::operator=(const Cat &op)
{
	std::cout << "Cat assingation operator called" << std::endl;
	if (this == &op)
		return *this;
	this->setType(op.getType());
	this->_brain = *(op._brain);
	return *this;
}

void		Cat::makeSound(void) const
{
	std::cout << "Meeooow ... I hate you." << std::endl;
}

Brain	*Cat::getBrain(void) const
{
	return this->_brain;
}

void	Cat::setBrain(Brain *brain)
{
	this->_brain = brain;
}
