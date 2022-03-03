/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:18:16 by fballest          #+#    #+#             */
/*   Updated: 2022/03/03 11:59:39 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Dog.hpp"

Dog::Dog(void): Animal("Dog")
{
	std::cout << "Dog have been constructed." << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog copy have been constructed." << std::endl;
	this->setType(copy.getType());
    Animal::setType(copy.getType());
}

Dog::Dog(const std::string type): Animal("Dog")
{
	std::cout << "Dog have been constructed, and assigned name = " << type << std::endl;
    this->_type = type;	
}

Dog &Dog::operator=(const Dog &equal)
{
	std::cout << "An equal Dog have been constructed." << std::endl;
	if (this == &equal)
		return (*this);
	this->setType(equal.getType());
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog have been destructed." << std::endl;	
}

void	 Dog::makeSound(void) const
{
	std::cout << "Dog sound is Guau Guau." << std::endl;
}