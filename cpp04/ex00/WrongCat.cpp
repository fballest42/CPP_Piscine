/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 12:24:47 by fballest          #+#    #+#             */
/*   Updated: 2022/03/03 13:10:09 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat have been constructed." << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "WrongCat copy have been constructed." << std::endl;
	this->setType(copy.getType());
}

WrongCat::WrongCat(const std::string type)
{
	std::cout << "WrongCat have been constructed and named = " << type << std::endl;
	this->_type = type;
}

WrongCat &WrongCat::operator=(const WrongCat &equal)
{
	std::cout << "WrongCat equal has been constructed." << std::endl;
	if (this == &equal)
		return *this;
	this->setType(equal.getType());
	return *this;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructed." << std::endl;
}

void		WrongCat::makeSound(void) const
{
	std::cout << "WrongCat sound is Uaim Uaim." << std::endl;	
}
