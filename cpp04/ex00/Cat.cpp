/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:18:09 by fballest          #+#    #+#             */
/*   Updated: 2022/03/03 12:03:16 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat(void): Animal("Cat")
{
	std::cout << "Cat have been constructed." << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Cat copy have been constructed." << std::endl;
	this->setType(copy.getType());
    Animal::setType(copy.getType());
}

Cat::Cat(const std::string type): Animal("Cat")
{
	std::cout << "Cat have been constructed, and assigned name = " << type << std::endl;
    this->_type = type;	
}

Cat &Cat::operator=(const Cat &equal)
{
	std::cout << "An equal Cat have been constructed." << std::endl;
	if (this == &equal)
		return (*this);
	this->setType(equal.getType());
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat have been destructed." << std::endl;	
}

void	 Cat::makeSound(void) const
{
	std::cout << "Cat sound is Miau Miau." << std::endl;
}