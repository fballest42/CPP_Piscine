/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:18:03 by fballest          #+#    #+#             */
/*   Updated: 2022/03/03 11:59:04 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal have been constructed." << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal copy have been constructed." << std::endl;
	this->setType(copy.getType());
}

Animal::Animal(const std::string type): _type(type)
{
	std::cout << "Animal have been constructed, and assigned name = " << this->getType() << std::endl;	
}

Animal &Animal::operator=(const Animal &equal)
{
	std::cout << "An equal Animal have been constructed." << std::endl;
	if (this == &equal)
		return (*this);
	this->setType(equal.getType());
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal have been destructed." << std::endl;	
}

void Animal::setType(std::string type)
{
	this->_type = type;
}

std::string Animal::getType(void) const
{
	return (this->_type);
}

void	 Animal::makeSound(void) const
{
	std::cout << "Animal sound is Zzzzzzzzzz." << std::endl;
}
