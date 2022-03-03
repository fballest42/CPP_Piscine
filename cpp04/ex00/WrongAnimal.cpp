/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:24:47 by fballest          #+#    #+#             */
/*   Updated: 2022/03/03 13:22:50 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	this->setType(copy.getType());
}

WrongAnimal::WrongAnimal(const std::string type)
{
	std::cout << "WrongAnimal constructed and named." << type << std::endl;
	this->setType(type);
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &equal)
{
	std::cout << "WrongAnimal equal have been constructed." << std::endl;
	if (this == &equal)
		return (*this);
	this->setType(equal.getType());
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructed." << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void		WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

void		WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound is ***********." << std::endl; 
}
