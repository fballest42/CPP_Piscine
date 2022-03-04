/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fballest <fballest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 09:18:03 by fballest          #+#    #+#             */
/*   Updated: 2022/03/04 14:34:55 by fballest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Animal &Animal::operator=(const Animal &op)
// {
// 	std::cout << "Animal equal operator called." << std::endl;
// 	if (this == &op)
// 		return *this;
// 	this->setType(op.getType());
// 	return *this;
// }

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
