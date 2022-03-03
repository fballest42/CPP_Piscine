/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:08:00 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/27 19:52:11 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->setType(copy.getType());
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &op)
{
	std::cout << "Cat assingation operator called" << std::endl;
	if (this == &op)
		return *this;
	this->setType(op.getType());
	return *this;
}

void		Cat::makeSound(void) const
{
	std::cout << "Meeooow ... I hate you." << std::endl;
}