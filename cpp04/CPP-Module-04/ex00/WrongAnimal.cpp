/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcabezas <rcabezas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 20:37:42 by rcabezas          #+#    #+#             */
/*   Updated: 2021/12/23 10:53:34 by rcabezas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->setType(copy.getType());
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &op)
{
	std::cout << "WrongAnimal assingation operator called" << std::endl;
	if (this == &op)
		return *this;
	this->setType(op.getType());
	return *this;
}

std::string	WrongAnimal::getType(void) const
{
	return this->_type;
}

void		WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

void		WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong Uncomprehensive sound" << std::endl;
}
