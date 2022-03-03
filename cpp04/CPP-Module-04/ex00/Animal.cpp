/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 20:07:39 by rcabezas          #+#    #+#             */
/*   Updated: 2022/03/03 10:34:01 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal constructor called and assigned name = " << this->getType() << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->setType(copy.getType());
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &equal)
{
	std::cout << "Animal assingation operator called" << std::endl;
	if (this == &equal)
		return *this;
	this->setType(equal.getType());
	return *this;
}

std::string	Animal::getType(void) const
{
	return this->_type;
}

void		Animal::setType(std::string type)
{
	this->_type = type;
}

void		Animal::makeSound(void) const
{
	std::cout << "Uncomprehensive sound" << std::endl;
}
